#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main(){
	
    int i, j, playerX=0,playerY=0;
    char input, player='@';
    
    while(true){
        for(i = 0; i < 20; i++){
            for(j = 0; j < 20; j++){
                if(playerX == j && playerY == i){
                    cout<<player;
                } else{
                cout<<" * ";
				}
            }
            cout<<"\n";
        }
        input = getch();
        switch(input){
            case 'w':
                if(playerY > 0)playerY-=1;
            break;
            case 's':
                if(playerY < 19)playerY+=1;
            break;
            case 'a':
                if(playerX > 0)playerX-=1;
            break;
            case 'd':
                if(playerX < 19)playerX+=1;
            break;
        }
        system("cls");
    }
} 
