#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;

main(){
	int hour=0, min=0, sec=0;
	string mode;
	
	
	while (true) {
		system("cls");
		cout << hour << " : " << min << " : " << sec << endl;
		cout << "\n";
		cout << "THEME MODE: " << mode << endl;
		sec++;
		
			if (hour >= 0 && hour <= 12)
					mode = "LIGHT";
					else if (hour >= 12 && hour <= 24)
					mode = "DARK";
		
		if (sec == 60){
			min ++;
			sec = 0;	
			
			if (min == 60){
				hour ++;
				min = 0;
				
				if (hour == 24){
					hour = 0;
					min = 0;
					sec = 0;
				} 
			}
		}
		sleep (1);
	}
	
	return 0;
}


