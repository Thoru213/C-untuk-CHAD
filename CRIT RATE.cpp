#include <iostream>
using namespace std;

main(){
	float crt, lvl, hasil, bonus, crit;
	
	cout << "Masukkan CRT valkyrie = ";
	cin >> crt;
	cout << "Masukkan level valkyrie = ";
	cin >> lvl;
	cout << "\n\n";
	crit = (crt/((lvl * 5) + 75)) * 100;
	
	cout << "Crit Rate Valkyrie adalah = " << crit << "%" << endl;

	return 0;	
}
