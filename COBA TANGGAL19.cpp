//Program ABC;
#include<iostream>
using namespace std;
int A, B, C;
void XYZ(int X, int Y, int &Z)
//X dan Y parameter masukan, Z parameter keluaran}
{
X= X + 1;
Y= Y + 1;
Z = X + Y;
}
int main() {
A= 2;
B= 5;
XYZ(A,B,C); 
cout << "Pemanggilan prosedur XYZ" << endl;
cout << A << " " << B << " " << C; //Menampilkan nilai A, B, dan C setelah pemanggilan
//prosedur
}
