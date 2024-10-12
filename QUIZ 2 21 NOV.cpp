#include <iostream>
using namespace std;

int main() {
	
	char array[] = {'S', 'A', 'Y', 'A'} ;
	char array2 [2] [2];
	int k = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			array2[i] [j] = array[k];
			k++;
			cout << array2[i] [j];
		}
		cout << endl;
	}
}
