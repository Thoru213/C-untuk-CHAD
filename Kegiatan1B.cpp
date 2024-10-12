#include <iostream>
using namespace std;

main (){
	string nama;
	int jam,lembur,gaji,jamlem=0;
	
	cout << "Nama karyawan: ";
	cin >> nama;
	cout << "Jam per minggu: ";
	cin >> jam;
	
	if (jam<=48){
		gaji = (jam*5000);
	} else{
	
	 jamlem=jam-48;
	 gaji= (jamlem*6000) + (jam*5000);
}
	cout << nama << " lembur sebanyak " << jamlem << endl;
	cout << "Jadi upah mingguan " << nama << " adalah " << gaji << " rupiah";
	
	return 0;
}
