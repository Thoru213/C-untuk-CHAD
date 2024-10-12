#include <stdio.h>


main(){
	int bil1,bil2,bil3,nilai1,nilai2,nilai3,max1=0,max2=0; // mendeklarasikan variable
	
	// user input data variable
	printf("Input bilangan ke-  ");
	scanf("%d",&bil1);
	getchar();
	printf("Input Nilai bilangan ke-%d : ",bil1);
	scanf("%d",&nilai1);
	getchar();
	printf("Input bilangan ke-  ");
	scanf("%d",&bil2);
	getchar();
	printf("Input Nilai bilangan ke-%d : ",bil2," : " );
	scanf("%d",&nilai2);
	getchar();;
	printf("Input bilangan ke-  ");
	scanf("%d",&bil3);
	getchar();
	printf("Input Nilai bilangan ke-%d : ",bil3," : " );
	scanf("%d",&nilai3);
	getchar();
	// user input data valiable end
	
	// processing data
	if(bil1>bil2 && bil1>bil3)
		bil1 = max1;
	else if(bil2>bil1 && bil2>bil3)
		bil2 = max1;
	else
		max1=bil3;
	
	if(nilai1 > nilai2 && nilai1 > nilai3)
		nilai1 = max2;
	else if(nilai2 > nilai1 && nilai2 > nilai3)
		nilai2 = max2;
	else
		max2=nilai3;
	// processing data end
	
	// output
	printf("JADI BILANGAN yang TERBESAR adalah : BILANGAN %d",max1 );
	printf(" yaitu %d",max2);
	return 0;
	// output end
	
}
