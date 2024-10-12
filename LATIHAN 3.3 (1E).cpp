#include <iostream>
using namespace std;

main() {
	int nota, diskon, jumlah;
	string nama, alamat;
	long int harga, tbayar, total;
	float tdiskon;
	
	nota = 1;
	nama = "SUSI";
	alamat = "Jl.Madiun";
	jumlah = 5;
	harga = 750000;
	diskon = 15;
	total = harga * jumlah;
	tdiskon = total * diskon / 100;
	tbayar = total - tdiskon;
	
	cout << "Nota \t\t: " << nota << endl;
	cout << "Nama nasabah \t: " << nama << endl;
	cout << "Alamat nasabah \t: " << alamat << endl;
	cout << "Jumlah barang \t: " << jumlah << endl;
	cout << "Harga \t\t: Rp. " << harga << endl;
	cout << "Diskon \t\t: Rp. " << diskon << "%" << endl;
	cout << "Total \t\t: Rp. " << total << endl;
	cout << "Total Diskon \t: Rp. " << tdiskon << endl;
	cout << "Total Bayar \t: Rp. " << tbayar << endl;
	cout << "*****************************************************" << endl;
	
	return 0;
}
