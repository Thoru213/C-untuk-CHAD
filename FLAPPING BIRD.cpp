#include "include/objects.hpp"
#include "include/font.hpp"
#include "include/sound.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


SDL_Window *window;
SDL_Renderer *render;
SDL_RendererFlip flip;
Audio audio;
Font font;

uint64_t score=0;
uint64_t old_score=score;
bool gameover_=false;
int i=0;

void game();

// Spawn clouds
void spawn_cloud(){
    if (cloud_timer-- < 0){
        cloud_timer=80;
        for (i=0;i<cloud_max;i++){
            // Check if cloud is not alive
            if (!clouds[i].alive){
                clouds[i].alive=true;
                clouds[i].rect.w = 128;
                clouds[i].rect.h = 64;
                clouds[i].rect.x = width+64;
                clouds[i].rect.y = rand()%height;
                break;
            }
        }
    }
}


// Render clouds
void show_cloud(){
    for (i=0;i<cloud_max;i++){
        if (clouds[i].alive){
            // If cloud is alive then render it

            SDL_RenderCopy(render , cloud_texture , NULL  , &clouds[i].rect);
            clouds[i].rect.x -= 5;
            if (clouds[i].rect.x < -128){
                // Make cloud dead 

                clouds[i].alive=false;
            }
        }
    }
}


void show_leaf(){
    for (i=0;i<leaf_max;i++){
        if (leafs[i].alive){
            SDL_RenderCopyEx(render , leaf_texture , NULL , &leafs[i].rect , leafs[i].angle , NULL , flip);
            leafs[i].rect.x -= 5;
            
            if (SDL_HasIntersection(&leafs[i].rect , &player.rect)){
                // gameover if leaf touched player
                gameover_=true;
            }

            if (leafs[i].rect.x < -32){
                // make leaf dead
                leafs[i].alive=false;
            }
            if (leafs[i].angle++ > 360){

                // change leaf angle
                leafs[i].angle=0;
            }
        }

    }
}

void spawn_leaf(){
    if (leaf_timer-- < 1){
        for (i=0;i<leaf_max;i++){
            // check if leaf is not alive
            if (!leafs[i].alive){
                leafs[i].alive=true;
                leafs[i].rect.x = width+32;
                leafs[i].rect.y = rand()%480;
                leafs[i].rect.w = 32;
                leafs[i].rect.h = 32;
                leaf_timer=20;
                break;
            }
        }
    }
}

// Player animation
void player_animation(){
    if (player.anim_timer-- < 0){
        player.anim_timer=5;
        if (player.anim_index++>0){
            player.anim_index=0;
        }
        player.src_rect = {player.anim_index*32,0,32,32};
    }
}


Uint32 callback(Uint32 interval , void *param){

    // increase score every second
    score++;
    return 0;
}

// Destroy game
void game_destroy(){
    font.destroy();
    audio.destroy();
    DESTROY_TEXTURES();
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(window);
}

// reset score , rect , and gameover indication
void game_reset(){
    for(i=0;i<leaf_max;i++){
        leafs[i].alive=false;
        leafs[i].rect = {0,0,0,0};
    }
    score=0;
    player.rect.x = 40;
    player.rect.y = 240;
    gameover_=false;
}


// gameover screen
void gameover(){
    SDL_Texture *text;
    SDL_DestroyTexture(text);
    font.create(render , &text , "GAME OVER");
    SDL_Rect rect;
    rect.w = 320;
    rect.h = 64;
    rect.x = 64;
    rect.y = 240;
    SDL_Texture *text1;
    SDL_DestroyTexture(text1);
    font.create(render , &text1 , "Press [SPACE] to play again");
    SDL_Rect rect1;
    rect1.w = 320;
    rect1.h = 64;
    rect1.x = rect.x;
    rect1.y = rect.y + rect1.h+64;

    bool run=true;
    SDL_Event event;
    while (run){
        SDL_RenderClear(render);
        spawn_cloud();
        show_cloud();
        spawn_leaf();
        SDL_RenderCopy(render , player_texture , &player.src_rect , &player.rect);
        player_animation();
        if (player.rect.y < height+player.rect.h){
            player.rect.y += 5;
        }

        show_leaf();
        SDL_RenderCopy(render , text , NULL , &rect);
        SDL_RenderCopy(render , text1 , NULL , &rect1);
        while (SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_QUIT: run=false;gameover_=false;break;;
                case SDL_KEYDOWN: switch(event.key.keysym.scancode){
                                      case SDL_SCANCODE_SPACE: game_reset();run=false; game();break;
                                      default : break;
                                  }break;
                default: break;
            }
        }
        SDL_RenderPresent(render);
        SDL_Delay(1000/60);
    }
    SDL_DestroyTexture(text);
    SDL_DestroyTexture(text1);
    if (gameover_){
        game_destroy();
    }
}


// Gameplay
void game(){
    bool run=true;
    
    SDL_Texture *text1;
    SDL_Rect text1_rect;
    text1_rect.w=50;
    text1_rect.h=32;
    text1_rect.x=50;
    text1_rect.y=32;
    string score_text = "Score "+to_string(score);
    SDL_DestroyTexture(text1);
    font.create(render , &text1 , score_text.c_str());
    bool jump=false;
    int jump_timer=20;
    
    SDL_TimerID timer = SDL_AddTimer(1000 , callback , NULL);
    //audio.play();
    audio.resume();
    SDL_Event event;
    while (!gameover_){
        SDL_RenderClear(render);

        if (audio.get_state()<=0){
            audio.destroy();
            audio.load("audio/background.wav");
            //cout << audio.get_state() << endl;
            audio.play();
        }
        //SDL_RemoveTimer(timer);
        if (score != old_score){
            SDL_RemoveTimer(timer);
            old_score=score;
            SDL_DestroyTexture(text1);
            score_text = "Score: "+to_string(score);
            font.create(render , &text1 , score_text.c_str());
            timer= SDL_AddTimer(1000 , callback , NULL);
        }
        //SDL_SetRenderDrawColor(render , 7 , 214, 237 , 0);
        SDL_RenderCopy(render , player_texture , &player.src_rect , &player.rect);
        
        show_leaf();
        spawn_leaf();
        spawn_cloud();
        show_cloud();
        player_animation();
        
        
        SDL_RenderCopy(render , text1 , NULL , &text1_rect);
        
        // player jump
        if (!jump){
            player.rect.y += 5;
        }else{
            if(jump_timer-- < 1){
                jump_timer=20;
                jump=false;
            }
            player.rect.y -= jump_timer/2;
        }

        if (player.rect.y > height || player.rect.y < 0){
            gameover_=true;
        }


        while (SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_QUIT: gameover_=true;exit(0);break;
                case SDL_KEYDOWN: switch(event.key.keysym.scancode){ 
                                    // if space key pressed then jump
                                    case SDL_SCANCODE_SPACE: jump=true;break;
                                    default : break;
                                  }break;
                default : break;
            }

        }
        SDL_RenderPresent(render);
        SDL_Delay(1000/60);
    }
    audio.stop();
    SDL_DestroyTexture(text1);
    gameover();
}


void starting_game(){

    // game main menu
    bool entered=false;
    player.rect.w = 40;
    player.rect.h = 40;
    player.rect.x = 40;
    player.rect.y = height/player.rect.h;

    SDL_Texture *text;
    font.create(render , &text , "Press [SPACE] key to enter");
    SDL_Rect text_rect;
    text_rect.w = 64*5;
    text_rect.h = 64;
    text_rect.x = 10;
    text_rect.y = height-128;

    SDL_SetRenderDrawColor(render , 7 , 214, 237 , 0);
    

    SDL_Event event;
    while (!entered){
        SDL_RenderClear(render);

        SDL_RenderCopy(render , text , NULL , &text_rect);
        player_animation();
        spawn_cloud();
        show_cloud();
        SDL_RenderCopy(render , player_texture , &player.src_rect , &player.rect);
        while (SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_KEYDOWN:
                    switch(event.key.keysym.scancode){

                        // if space pressed then enter the game
                        case SDL_SCANCODE_SPACE: entered=true;break;
                        default : break;
                    }
                    break;
                case SDL_QUIT: entered=true;exit(0);break;
                default : break;
            }
        }
        SDL_RenderPresent(render);
        SDL_Delay(1000/60);
    }
    SDL_DestroyTexture(text); 
    game();
}
    

int main(){
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
        cout << "Error" << endl;
    }
    // create window and renderer
    window = SDL_CreateWindow("Flying bird" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , width , height , 0);
    Uint32 render_flag = SDL_RENDERER_ACCELERATED;
    render = SDL_CreateRenderer(window , -1 , render_flag);
    
    font.init();
    audio.load("audio/background.wav");
    // load game textures
    LOAD_TEXTURES(render);
    starting_game();
}
