#include <iostream>
using namespace std;

main(){
	float harga, diskon, besardiskon, hbersih;
	
	cout << "----------------------------------------------------------------" << endl;
	cout << "Masukkan harga barang \t= Rp. ";
	cin >> harga;
	cout << "Masukkan diskon \t= ";
	cin >> diskon;
	besardiskon = harga * (diskon / 100);
	cout << "----------------------------------------------------------------" << endl;
	cout << "Harga barang \t\t= Rp. " << harga << endl;
	cout << "Besar diskon \t\t= Rp. " << besardiskon << endl;
	cout << "\t\t\t\t    -" << endl;
	cout << "----------------------------------------------------------------" << endl;
	hbersih = harga - besardiskon;
	cout << "Harga bersih \t\t= Rp. " << hbersih << endl;
	cout << "----------------------------------------------------------------" << endl;

return 0;
}
