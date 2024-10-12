#include <iostream>
#include <conio.h>
//#include <stdlib.h>
using namespace std;

main(){
	
int i, b = 1, c, rumus, playerY=0;
int hp, basehp = 12500;
int atk, baseatk = 1500;
//int def, basedef = 225;
char input;
string name, tandah, tandaa, tandad, player = "-----------------";
    
cout << "Enter your name: ";
cin >> name;
cout << "\n";
cout << "CHOOSE YOUR WEAPON\n   PRESS ENTER" << endl;
getch();
system("cls");
    
    while(true){
    	cout << "====================================" << endl;
		cout << name << endl;
    	cout << "HP  = " << basehp << "\t+ " << hp << endl;
		cout << "ATK = " << baseatk << "\t+ " << atk << endl;
	//	cout << "DEF = " << basedef << "\t+ " << def << endl;
		cout << "====================================" << endl;
		
        for(i = 0; i < 3; i++){
                if(playerY == i){
                    cout<<player;
                } else{
    			cout << "Virtous Vortex\nHP +10%\nATK +30%\n" << endl;
    			cout << "Virtous Contractor\nHP 40%" << endl;
				}
            cout<<"\n";
        }
    
    /*
    if (hp >= 0)
    	tandah = "+";
    else 
    	tandah = "";
	
	if (atk >= 0)
    	tandaa = "+";
     else 
    	tandaa =  "";
	
	if (def >= 0)
    	tandad = "+";
    else 
    	tandad + "";
    */
    
        input = getch();
        switch(input){
            case 'w':
                if(playerY > 0)
				playerY-=1;
				hp = basehp * 0.1;
				atk = baseatk * 0.3;
				//def = basedef * 0;
            break;
            case 's':
                if(playerY < 1)
				playerY+=1;
				hp = basehp * 0.4;
				atk = baseatk * 0;
				//def = basedef * (-0.1);
            break;
        }
                system("cls");
    }
} 
