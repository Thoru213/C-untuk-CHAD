#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int dadu, Player, Opponent;
	string ulang;
	do {
		 system("cls");
			cout << "1. lempar dadu\n2. Keluar\npilihan: ";
			cin >> dadu;
			if (dadu == 1){
				Player = (rand() % 6) + 1;
				Opponent = (rand() % 6) + 1;
				cout << "Player: " << Player << endl;
				cout << "Opponent: " << Opponent<< endl;
					if(Player > Opponent){
					cout << "Nice one bro" << endl;
				} 	else if (Player < Opponent){
					cout << "Nice try" << endl;
				} 	else {
					cout << "Duce" << endl;
				} cout << "Ulang <Y/N>: "; cin >> ulang;
			} else if (dadu == 2){
				ulang = "n";
			} else {
				cout << "Bruhhhhhhhhhhhhhhhhhh";
			}
	
	} while(ulang == "y");
	system ("cls");
	cout << "Game selesai" << endl;

	
}
