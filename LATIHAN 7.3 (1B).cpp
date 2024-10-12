#include<iostream>
using namespace std;

main()
{
int a, b;
for (a = 1; a <= 10; a += 1){
	cout << "\n";
for (b = 1; b <= a; b += 1)	{
		cout << a * b << " ";
	}
}

return 0;
}

