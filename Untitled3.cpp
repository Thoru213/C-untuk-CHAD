#include <iostream>
using namespace std;

int kali(int a, int b) {
	return a * b;
}
void hasilkali(int a, int b) {
	int hasil = kali(a, b);

	cout << hasil;
}

int main() {
	int x, y;
	cout << "Masukkan angka pertama: ";
	cin >> x;
	cout << "Masukkan angka kedua: ";
	cin >> y;
	
	hasilkali(x, y);
 	
}
