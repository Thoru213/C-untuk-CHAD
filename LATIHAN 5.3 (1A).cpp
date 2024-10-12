#include <iostream>
using namespace std;
main() {

int kode, harga, jumlah, total;
cout << "Menentukan hari " << endl;
cout << "1 = SENIN \t 3 = RABU \t 5 = JUM'AT \t 7 = MINGGU" << endl;
cout << "2 = SELASA \t 4 = KAMIS \t 6 = SABTU\n" << endl;
cout << "Masukkan kode hari (1..7): ";
cin >> kode;
switch (kode)
{
	case 1 :
		cout << "Hari Senin";
			break;
	case 2 :
		cout << "Hari Selasa";
			break;
	case 3 :
		cout << "Hari Rabu";
			break;
	case 4 :
		cout << "Hari Kamis";
			break;
	case 5 :
		cout << "Hari Jum'at";
			break;
	case 6 :
		cout << "Hari Sabtu";
			break;
	case 7 :
		cout << "Hari Minggu";
			break;
	default : 
		cout << "Anda salah memasukkan kode";
}
return 0;
}


