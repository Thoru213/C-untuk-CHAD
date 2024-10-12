#include <iostream>
using namespace std;

main(){
	int a, b, c;
	
	cout << "Input Bilangan-1:... ";
	cin >> a;
	cout << "Input Bilangan-2:... ";
	cin >> b;
	cout << "Input Bilangan-3:... ";
	cin >> c;
		cout << "\n\n";
	
	if (a > 0){
		cout << "Bilangan-1: Bilangan POSITIF" << endl;
	} else if (a < 0){
		cout << "Bilangan-1: Bilangan NEGATIF" << endl;
	} else{
		cout << "Bilangan-1: Bilangan nol" << endl;
	}
	
		if (b > 0){
		cout << "Bilangan-2: Bilangan POSITIF" << endl;
	} else if (b < 0){
		cout << "Bilangan-2: Bilangan NEGATIF" << endl;
	} else{
		cout << "Bilangan-2: Bilangan nol" << endl;
	}

	
		if (c > 0){
		cout << "Bilangan-3: Bilangan POSITIF" << endl;
	} else if (c < 0){
		cout << "Bilangan-3: Bilangan NEGATIF" << endl;
	} else{
		cout << "Bilangan-3: Bilangan nol" << endl;
	}
	
	return 0;
}
