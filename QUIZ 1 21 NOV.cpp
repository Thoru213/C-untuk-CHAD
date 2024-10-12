#include<iostream>
using namespace std;

main() {
	
int a;
for (a = 1; a <= 50; a ++){
	
	if (a % 5 == 0){
		cout << "LIMA" << endl;
		continue;
	}
	cout << a;
cout << "\n";
}

return 0;
}

