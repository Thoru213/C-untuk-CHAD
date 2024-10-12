#include <iostream>
using namespace std;

main (){
	string nama, alamat, belajar;
	int biaya, cil1, cil2, tunggakan, nim;
	
	nim = 1805101125;
	nama = "Juan Oscar Brilian";
	alamat = "Jl. Salak 9 Madiun";
	belajar = "Algoritma & Pemrograman-I";
	biaya = 200000;
	cil1 = 150000;
	cil2 = 50000;
	tunggakan = biaya - (cil1 + cil2);
	
	cout << "*****************************************************************" << endl;
	cout << "Penerimaan Mahasiswa Baru UNIPMA" << endl;
	cout << "*****************************************************************" << endl;
	cout << "NIM\t\t : " << nim << endl;
	cout << "Nama mahasiswa\t : " << nama << endl;
	cout << "Alamat mahasiswa : " << alamat << endl;
	cout << "Belajar\t\t : " << belajar << endl;
	cout << "Biaya belajar\t : " << biaya << endl;
	cout << "Cicilan pertama\t : " << cil1 << endl;
	cout << "Cicilan kedua\t : " << cil2 << endl;
	cout << "Tunggakan\t : " << tunggakan << endl;
	cout << "*****************************************************************" << endl;
}
