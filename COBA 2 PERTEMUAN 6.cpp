#include <iostream>
using namespace std;

main(){
	
	int x;
	cout << "Masukkan bilangan: ";
	cin >> x;
	

	if (x < 10)
		cout << "Angka tersebut kurang dari 10";
	else if (x == 10)
		cout << "Angka tersebut kurang dari sama dengan 10 (tidak memenuhi syarat)";
		
	return 0;
}
