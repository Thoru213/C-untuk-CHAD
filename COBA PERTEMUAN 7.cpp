#include <iostream>
using namespace std;
main() {

string barang, nama;
int kode, harga, jumlah, total;
cout << "Masukkan nama anda: ";
cin >> nama;
cout << "Selamat datang " << nama << " di KOPMA UNIPMA" << endl;
cout << "Macam-macam barang:" << endl;
cout << "1. Buku Tulis \n2. Pensil \n3. Penghapus 2 \n4. Spidol \n5. Penggaris" << endl;
cout << "Pilih barang yang ingin dibeli (1-5): ";
cin >> kode;

switch (kode)
{
	case 1 :
		barang = "Buku Tulis";
		harga = 2500;
			break;
	case 2 :
		barang = "Pensil";
		harga = 1000;
			break;
	case 3 :
		barang = "Penghapus 2";
		harga = 1000;
			break;
	case 4 :
		barang = "Spidol";
		harga = 3000;
			break;
	case 5 : 
		barang = "penggaris";
		harga = 1500;
			break;
	default : 
		cout << "Anda salah memasukkan kode";
}
	cout << "Barang Yang Dibeli\t: " << barang << endl;
	cout << "Harga Satuan\t\t: " << harga << endl;
		cout << "Jumlah\t\t\t: ";
	cin >> jumlah;
	
		total = harga * jumlah;
		
	cout << "Total\t\t\t: " << total;
return 0;
}


