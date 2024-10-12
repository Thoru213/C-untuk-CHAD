#include <stdio.h>
int main(void) {
int a; // tipe integer (bilangan bulat)
float b; // tipe float (bilangan real)
char c; // tipe karakter
// tipe string, pendeklarasiannya
// harus langsung diinisialisasi
char d[10] = "Algoritma";
// inisialisasi variabel
a = 2;
b = 4.5;
c = 'A';
/*
* menampilkan isi variabel ke konsol
* perhatikan untuk aturan pemformatannya
* %d untuk integer, %f untuk float, %c untuk char, %s untuk
string */
printf("a = %d\n", a);
printf("b = %f\n", b);
printf("c = %c\n", c);
printf("d = %s\n", d);
// boleh menambahkan baris berikut ini
// di setiap akhir main
return 0;
}

