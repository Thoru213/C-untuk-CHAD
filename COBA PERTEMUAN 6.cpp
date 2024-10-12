#include <iostream>
using namespace std;
main(){
	
	int x;
	cout << "Masukkan bilangan: ";
	cin >> x;
	
	if (x % 2 ==0){
		cout << x << " merupakan bilangan genap";
	}else if (x % 2 ==1){
		cout << x << " merupakan bilangan ganjil";
	}
		
		return 0;
}
