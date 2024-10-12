#include <iostream>
using namespace std;

int main(){
	
	cout << "Hai namaku Herdin nama kamu siapa?" << endl;
   string x;
	cout << "Nama kamu: " ; 
	cin >> x;
	cout << "Senang bertemu denganmu " << x << endl;
	
	cout << "Berapa umurmu sekarang?" << endl;
	int y;
	cout << "Umur kamu: ";
	cin >> y;
	if (y>=18) {
		cout << "Oh halo kak:)" << endl;
	} else {
		cout << "Salken deck" << endl;
	}
	return 0;
}
