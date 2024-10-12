#include<iostream>
using namespace std;

main()
{
int a, b;

cout << "Banyak baris: ";
cin >> a;
for (a; a >= 1; a -= 1){
	cout << "\n";
for (b = 1; b <= a; b +=1)	{
		cout <<  b << " ";
	}
}

return 0;
}

