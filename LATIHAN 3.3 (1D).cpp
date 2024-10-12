#include <iostream>
using namespace std;

main () {
	string rek, nama, alamat, jenis;
	float cil1, cil2;
	long int dana, tunggakan;
	
	rek = "081335123456";
	nama = "SAIFUL";
	alamat = "Jl.Mawar No.5";
	jenis = "Dagang";
	dana = 5000000;
	cil1 = 750000;
	cil2 = 750000;
	tunggakan = dana - (cil1 + cil2);
	
	cout << "****************************************************************" << endl;
	cout << "\t\tPenerimaan Angusran Nasabah" << endl;
	cout << "****************************************************************" << endl;
	cout << "No Rek \t\t: " << rek << endl;
	cout << "Nama nasabah \t: " << nama << endl;
	cout << "Alamat nasabah \t: " << alamat << endl;
	cout << "Jenis Kredit \t: " << jenis << endl;
	cout << "Dana \t\t: Rp. " << dana << endl;
	cout << "Cicilan Pertama : Rp. " << cil1 << endl;
	cout << "Cicilan Kedua \t: Rp. " << cil2 << endl;
	cout << "Tunggakan \t: Rp. " << tunggakan << endl;
	cout << "****************************************************************" << endl;
	
	return 0;
}
