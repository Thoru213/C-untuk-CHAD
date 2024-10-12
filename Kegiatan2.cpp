#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	float X, Y;
	const float phi = 3.14;
	cout << "Masukkan variable A: ";
	cin >> a;
	cout << "Masukkan variable B: ";
	cin >> b;
	X = phi * a * a * b;
	Y = (b * (a * phi * a)) + (2 * (phi * a * a));
	
	cout << "Nilai X adalah: " << X << endl;
	cout << "Nilai Y adalah: " << Y << endl;
	
	return 0;
}
