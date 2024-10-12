#include <iostream>
using namespace std;

main () {
	int a, b;
	atas:
		cout << "Masukkan Angka: ";
		cin >> a;
		if (a>=1 && a<=4)
			goto atas;
	
	return 0;
}
