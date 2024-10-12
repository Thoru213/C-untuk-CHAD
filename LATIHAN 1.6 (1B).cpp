#include <stdio.h>


main(){
	int nilai1,nilai2,nilai3; // mendeklarasikan variable
	
	// memasukkan variable
	printf("Input nilai bilangan ke-1\t\t: ");
	scanf("%d",&nilai1);
	printf("Input nilai bilangan ke-2\t\t: ");
	scanf("%d",&nilai2);
	printf("Input nilai bilangan ke-3\t\t: ");
	scanf("%d",&nilai3);
	printf ("\n");
	
	// pemrosesan data

	if(nilai1 > nilai2 && nilai1 > nilai3){
		printf("Bilangan terbesar adalah bilangan ke-1\t: %d");
	}else if(nilai2 > nilai1 && nilai2 > nilai3){
		printf("Bilangan terbesar adalah bilangan ke-2\t: %d");
	}else if(nilai3 > nilai1 && nilai3 > nilai2){
		printf("Bilangan terbesar adalah bilangan ke-3\t: %d");
	} else{
	
	}
		
	return 0;
}
