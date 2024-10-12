#include <stdio.h>
#include <iostream>
using namespace std;

main () {
	
int n=1, nilai=5;

do
{
cout << "\n";
cout << "Nilai ke " << n << " = " << nilai;
n++;
nilai+=5;
}
while(nilai <= 50);
	
	return 0;
}
