#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{
int a, b;
char lagi;
atas:
cout<<"\nMasukkan Bilangan = ";
cin>>a;
b = a % 2;
printf("Nilai %d %% 2 adalah = %d",a, b);
printf("\n\nIngin Hitung Lagi [Y/T] : ");
lagi = getche() ;
if (lagi == 'Y' || lagi == 'y')
goto atas;
getch();
}

