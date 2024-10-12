#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
char kode;
cout<<"Masukkan Kode Barang [A..C] : ";
cin>>kode;
switch(kode)
{
case 'A' :
cout<<"SabunMandi";
//break;
case 'B' :
cout<<"SabunCuci";
//break;
case 'C' :
cout<<"Deterjent";
//break;
default:
cout<<"Anda Salah Memasukan kode";
break;
}
getch();
}
