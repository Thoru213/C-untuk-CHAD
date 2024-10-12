#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string nama, alamat;
	int jarak;
	cout << "Masukkan nama kamu: ";
	cin >> nama;
	string x = nama + " Selamat Datang. Kamu tinggal dimana?";
	cout << "Hello, " << x << endl;
	cin >> alamat;
	cout << "Emm.. Berapa KM jarak kampus ke " << alamat << endl;
	cin >> jarak;
	cout << "Jadi jaraknya " << jarak << " KM" << endl;
	cout << "Oke Selamat Belajar ya " << nama << endl;
	
	return 0;
}
