#include <iostream>
#include <conio.h>
using namespace std;

main() {
	char maju, mundur, kiri, kanan, pkiri, pkanan, patas, pbawah;
	string ulang;
	
	do {
		system ("cls");
	cout << "====================" << endl;
	cout << "|  SISTEM KONTROL  |" << endl;
	cout << "====================" << endl;
	cout << "\n";
	cout << "Maju\t    : ";
	cin >> maju;
	cout << "Mundur\t    : ";
	cin >> mundur;
	cout << "kiri\t    : ";
	cin >> kiri;
	cout << "Kanan\t    : ";
	cin >> kanan;
	cout << "Lihat atas  : ";
	cin >> patas;
	cout << "Lihat bawah : ";
	cin >> pbawah;
	cout << "Lihat kanan : ";
	cin >> pkanan;
	cout << "Lihat kiri  : ";
	cin >> pkiri;  
	cout << "SIMPAN <Y/N>";
	cin >> ulang;
} while (ulang == "n");
	system ("cls"); 
	

}
