#include <iostream>
using namespace std;
main (){
	string nama, kelas, matkul1, matkul2, matkul3, matkul4, nilaih1, nilaih2, nilaih3, nilaih4;
	char nim[20];
	int nilai1, nilai2, nilai3, nilai4, sks1, sks2, sks3, sks4, totalsks;
	
	
	cout << "Nama\t: ";
	cin >> nama;
	cout << "NIM\t: ";
	cin >> nim;
	cout << "Kelas\t: ";
	cin >> kelas;
	
			cout << "\n";
	
		cout << "Mata Kuliah 1: ";
		cin >> matkul1;
		cout << "Berapa SKS: ";
		cin >> sks1;
		
		cout << "Mata Kuliah 2: ";
		cin >> matkul2;
		cout << "Berapa SKS: ";
		cin >> sks2;
		
		cout << "Mata Kuliah 3: ";
		cin >> matkul3;
		cout << "Berapa SKS: ";
		cin >> sks3;
		
		cout << "Mata Kuliah 4: ";
		cin >> matkul4;
		cout << "Berapa SKS: ";
		cin >> sks4;

			cout << "\n";

		cout << "Masukkan nilai mata kuliah " << matkul1 << "\t\t: ";
		cin >> nilai1;
		
		cout << "Masukkan nilai mata kuliah " << matkul2 << "\t\t: ";
		cin >> nilai2;
		
		cout << "Masukkan nilai mata kuliah " << matkul3 << "\t: ";
		cin >> nilai3;
		
		cout << "Masukkan nilai mata kuliah " << matkul4 << "\t: ";
		cin >> nilai4;
	system("cls");
	
	
	
		if (nilai1 >= 0 && nilai1 <= 39){
			nilaih1 = "E";
	} else if (nilai1 >= 40 && nilai1 <= 49){
			nilaih1 = "D";
	} else if (nilai1 >= 50 && nilai1 <= 69){
			nilaih1 = "C";
	}else if (nilai1 >= 70 && nilai1 <= 84){
			nilaih1 = "B";
	}else if (nilai1 >=85 && nilai1 <=100){
			nilaih1 = "A";
	}
	
		if (nilai2 >= 0 && nilai2 <= 39){
			nilaih2 = "E";
	} else if (nilai2 >= 40 && nilai2 <= 49){
			nilaih2 = "D";
	} else if (nilai2 >= 50 && nilai2 <= 69){
			nilaih2 = "C";
	}else if (nilai2 >= 70 && nilai2 <= 84){
			nilaih2 = "B";
	}else if (nilai2 >=85 && nilai2 <=100){
			nilaih2 = "A";
	}
	
		if (nilai3 >= 0 && nilai3 <= 39){
			nilaih3 = "E";
	} else if (nilai3 >= 40 && nilai3 <= 49){
			nilaih3 = "D";
	} else if (nilai3 >= 50 && nilai3 <= 69){
			nilaih3 = "C";
	}else if (nilai3 >= 70 && nilai3 <= 84){
			nilaih3 = "B";
	}else if (nilai3 >=85 && nilai3 <=100){
			nilaih3 = "A";
	}
	
		if (nilai4 >= 0 && nilai4 <= 39){
			nilaih4 = "E";
	} else if (nilai4 >= 40 && nilai4 <= 49){
			nilaih4 = "D";
	} else if (nilai4 >= 50 && nilai4 <= 69){
			nilaih4 = "C";
	}else if (nilai4 >= 70 && nilai4 <= 84){
			nilaih4 = "B";
	}else if (nilai4 >=85 && nilai4 <=100){
			nilaih4 = "A";
	}
	
	totalsks = sks1 + sks2 + sks3 + sks4;
	

	cout << "Nama\t: " << nama << endl;
	cout << "NIM\t: " << nim << endl;
	cout << "Kelas\t: " << kelas << endl;
	cout << "\n\n";
	cout << "=============================================================" << endl;
	cout << " MATA KULIAH\t NILAI ANGKA\t NILAI HURUF\t\tSKS" << endl;
	cout << "=============================================================" << endl;	
	cout << matkul1 << "\t\t\t" << nilai1 << "\t\t" << nilaih1 << "\t\t" << sks1 << endl;
	cout << "=============================================================" << endl;
	cout << matkul2 << "\t\t\t" << nilai2 << "\t\t" << nilaih2 << "\t\t" << sks2 << endl;
	cout << "=============================================================" << endl;
	cout << matkul3 << "\t\t\t" << nilai3 << "\t\t" << nilaih3 << "\t\t" << sks3 << endl;
	cout << "============================================================" << endl;	
	cout << matkul4 << "\t\t\t" << nilai4 << "\t\t" << nilaih4 << "\t\t" << sks4 << endl;
	cout << "============================================================" << endl;
	cout << "TOTAL SKS: " << "\t\t\t\t\t\t" << totalsks << endl;
	cout << "============================================================" << endl;
		
	return 0;
}
