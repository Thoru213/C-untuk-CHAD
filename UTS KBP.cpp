#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

double KelLingkaran(double jari, const double pi = 3.1415926) {
	double keliling = 2 * pi * jari;
	cout << "Keliling lingkaran adalah : " << keliling << "cm^2" << endl;
	return keliling;
}

double LuasLingkaran(double jari, const double pi = 3.1415926) {
	double luas = pi * jari * jari;
	cout << "Luas lingkaran adalah : " << luas << "cm^3" << endl;
	return luas;
}

int main () {
	char pilihan;
	int opsi;
	double jari;
	cout << "Menghitung Lingkaran" << endl;
	cout << "====================\n" << endl;
	
	do {
	cout << "1. Menghitung Keliling Lingkaran\n2. Menghitung Luas Lingkaran\n";
	cout << "3. Keluar\n\nPilih opsi : ";
	cin >> opsi;
	system("cls");
		if (opsi == 1) {
			cout << "Masukkan jari-jari: ";
			cin >> jari;
			KelLingkaran(jari);
		} else if (opsi == 2) {
			cout << "Masukkan jari-jari: ";
			cin >> jari;
			LuasLingkaran(jari);
		} else if (opsi == 3){
			break;
		} else {
			cout << "Input tidak valid!";
			break;
		}
		cout << "\nPerhitungan Selesai. Ingin menghitung lagi? <Y/N>";
		cin >> pilihan;
		system("cls");
		
	} while (pilihan == 'Y' || pilihan == 'y');
	cout << "\nProgram selesai\nSampai jumpa lagi :D" << endl;
	
	return 0; 
}
