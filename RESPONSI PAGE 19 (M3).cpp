#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main(){	
double tot_beli, discont=0, jum_bayar=0;
cout << "Total Pembelian Rp. ";
cin >> tot_beli;
if (tot_beli >= 50000)
discont = 0.2 * tot_beli;
cout<<"Besarnya Discont Rp. " << discont << endl;
jum_bayar = tot_beli - discont;
cout<<"Jumlah yang harus dibayarkan Rp. " << jum_bayar;
getch();
}
