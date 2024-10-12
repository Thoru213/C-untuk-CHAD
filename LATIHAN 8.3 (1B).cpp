#include <iostream>
using namespace std;

main() {
	
	int gnp, sm;
	sm = 0;
	gnp = 2;
	cout << "\tLATIHAN PENGULANGAN C++ DENGAN WHILE" << endl;
	cout << "====================================================" << endl;
	cout << "1. Menampilkan deret angka 1 sampai 10\t\t\t\t: ";
	while (sm <=10 ){
		cout << sm;
		sm++;
	}
	cout << "\n";
	cout << "2. Menampilkan deret bilangan genap dari angka 1 sampai 10\t: ";
	while (gnp <=10){
		cout << gnp;
		gnp+=2;
	}
	
return 0;	
}
