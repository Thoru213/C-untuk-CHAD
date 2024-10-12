#include <iostream>
#include <stdio.h>
using namespace std;

main() {
	int hp,  basehp = 10000;
	int atk, baseatk = 100;
	
	hp = basehp * 0.1;
	atk = baseatk * 0.2;
	cout << "HP = " << basehp << "+" << hp << endl;
	cout << "ATK = " << baseatk << "+" << atk << endl;
	
	cout << "Virtous Vortex\nHP +10%\nATK +20%" << endl;



	atk = baseatk * 0.3;
	cout << "Virtous Contractor\nATK +30%" << endl;
}
