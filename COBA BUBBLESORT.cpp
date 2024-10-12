#include <iostream>
using namespace std;

int main(){
	cout << "COBA BUBBLE SORT" << endl;
	
	int A[] = {32, 61, 14, 22, 10, 15, 14, 23, 59};
	int t;
	int n = sizeof(A)/sizeof(A[0]);
	
	
	for (int i = 1; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if ( A[j]> A[j+1] ) {
				t = A[j];
				A[j] = A[j+1];
				A[j+1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++){
			cout << A[i] << ", ";
	 }
	 return 0;
	}
