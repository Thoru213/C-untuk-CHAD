#include <iostream>
using namespace std;

int main() {
	int bil;
	int faktorial = 1;
	cout << "Masukkan bilangan: ";
	cin >> bil;
	
	for (int i = bil; i >= 1; i--){
		faktorial = faktorial * i;
	}
	cout << "Faktorial: " << faktorial;
}
