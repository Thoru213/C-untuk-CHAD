#include <stdio.h>
int main (){
	char nama[12]; 
	int nilai;
	
	printf("Program Mengetes Kondisi \n");
	printf("======================== \n");
	printf("Masukkan Nama		=");
	gets(nama);
	printf("Masukkan Nilai= ");
	scanf("%d",&nilai);
	
	if(nilai<50){
		printf("TIDAK LULUS");
	}else if(nilai=50 && nilai <70){
		printf("CUKUP");
	}else if(nilai>=70){
		printf("BAIK");
	}else if(nilai=100){
		printf("BAIK");
	}
	
	return 0;
}
