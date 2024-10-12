#include<iostream>
using namespace std;
int a, b, c;
void terbesar (int a, int b, int c){
	if (a > b && a > c){
	cout << "Terbesar: " << a;
} else if (b > a && b > c){
	cout << "Terbesar: " << b;
} else if (c > a && c > b){
	cout << "Terbesar: " << c;
}
};

main () {
cout << "Masukkan bilangan 1:";
cin >> a;
cout << "Masukkan bilangan 2:";
cin >> b;
cout << "Masukkan bilangan 3:";
cin >> c;

terbesar(a, b, c);
}

