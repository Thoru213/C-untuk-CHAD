#include <stdio.h>
int main(void) {
// mendeklarasikan konstanta
const float PI = 3.14;
// mendeklarasikan variabel
float luas;
int a, b, c, r;
// mengisikan nilai ke variabel (inisialisasi)
a = 3;
b = 10;
c = 8;
r = 7;
// menampilkan ke konsol
printf("a = %d b = %d c = %d\n\n", a, b, c);
// operasi aritmatik
printf("a + b = %d\n", a + b);
printf("b - a = %d\n", b - a);
printf("a * b = %d\n", a * b);
printf("c / a = %d\n", c / a);
printf("b / a = %d\n", b / a);
printf("c mod b = %d\n\n", c % b);
printf("PI = %f\n", PI);
printf("r = %d\n", r);
// menghitung luas lingkaran
luas = PI * r * r;
printf("Luas lingkaran:\n");
printf("PI * r * r = %f\n", luas);
return 0;
}

