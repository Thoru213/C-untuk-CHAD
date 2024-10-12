#include<iostream>
using namespace std;
main()
{
int kode;
cout<<"Masukkan Kode Bulan <1..12> =  ";
cin>>kode;
switch(kode)
{
case 1 :
	cout << "Bulan Januari";
		break;
case 2:
	cout << "Bulan Februari";
		break;
case 3 :
	cout << "Bulan Maret";
		break;
case 4 :
	cout << "Bulan April";
		break;
case 5 :
	cout << "Bulan Mei";
		break;
case 6 :
	cout << "Bulan Juni";
		break;
case 7 :
	cout << "Bulan Juli";
		break;
case 8 :
	cout << "Bulan Agustus";
		break;
case 9 :
	cout << "Bulan September";
		break;
case 10 :
	cout << "Bulan Oktober";
		break;
case 11 :
	cout << "Bulan November";
		break;
case 12 :
	cout << "Bulan Desember";
		break;
default :
	cout << "Anda Salah Memasukan kode";
		break;
}

return 0;
}

