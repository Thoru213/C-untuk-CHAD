#include <iostream>
using namespace std;

int main (){
	
	string kode,nama;
	int jumlah;
	long hargasatuan, bayar, kembali, totalharga;
	cout << "***************************************" << endl;
	cout << "\tNOTA PENJUALAN KOMPUTER\n\n";
	cout << "***************************************" << endl;
	cout << "Kode Barang\t: ";
	cin >> kode;
	cout << "Nama Barang\t: ";
	cin >> nama;
	cout << "Jumlah Barang\t: ";
	cin >> jumlah;
	cout << "Harga Satuan\t: Rp. ";
	cin >> hargasatuan;
	
	totalharga = hargasatuan*jumlah;
	
	cout << "\n";
	cout << "Total Harga\t: Rp. " << totalharga << endl;
	cout << "Bayar \t\t: Rp. ";
	cin >> bayar;
	

	kembali = bayar - totalharga;
	cout << "Kembali \t: Rp. " << kembali << endl;
	cout << "***************************************" << endl;
	

	return 0;
}
