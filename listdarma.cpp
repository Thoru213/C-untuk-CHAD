#include <iostream>
using namespace std;

int main() {
	
	string menuMakanan[4] = {"Batagor", "Siomay", "Bakso", "Soto Ayam"};
	int hargaMakanan[4] = {7000, 8000, 10000, 6000};
	
	string menuMinuman[2] = {"Es Teh", "Es Jeruk"};
	int hargaMinuman[2] = {3000, 4000};
	
	cout << "***** TUGAS 8 CODING *****" << endl;
	cout << "Nama	: Darma Kristianto" << endl;
	cout << "Absen	: 15" << endl;
	cout << "**************************\n\n";
	cout << "MENU MAKANAN" << endl;
	
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". " << hargaMakanan[i] << " " << menuMakanan[i] << endl;
	}
	
	cout << "\n";
	cout << "HARGA MINUMAN" << endl;
	int x = 0;
	while (x < 2) {
		cout << x + 1 << ". " << hargaMinuman[x] << " " << menuMinuman[x] << endl;
		x++;
	}
	
}
