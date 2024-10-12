#include <iostream>
using namespace std;
main(){
	int a;

	cout << "Input 1 bilangan: ";
	cin >> a;
	
		if (a > 0 && a % 2 == 0){
		cout << "Bilangan genap dan positif" << endl;
	} else if (a > 0 && a % 2 !=0){
		cout << "Bilangan ganjil dan positif" << endl;
	} else if (a < 0){
		cout << "Bilangan negatif" << endl;
	}
	return 0;
}
