#include <iostream>
using namespace std;

main(){
	int a, b, c;
	
	cout << "Input ANGKA-1:... ";
	cin >> a;
	cout << "Input ANGKA-2:... ";
	cin >> b;
	cout << "Input ANGKA-3:... ";
	cin >> c;
	cout << "\n\n";
	
	if (a % 2 == 0){
		cout << "Angka-1 = " << a << " adalah GENAP" << endl;
	} else{
		cout << "Angka-1 = " << a << " adalah GANJIL" << endl;
	} 
	
	if (b % 2 == 0){
		cout << "Angka-2 = " << b << " adalah GENAP" << endl;
	} else{
		cout << "Angka-2 = " << b << " adalah GANJIL" << endl;
	} 
	
	if (c % 2 == 0){
		cout << "Angka-3 = " << c << " adalah GENAP" << endl;
	} else{
		cout << "Angka-3 = " << c << " adalah GANJIL" << endl;
	} 
}
