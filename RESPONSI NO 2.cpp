#include <iostream>
using namespace std;

main () {
	int a;
	
	for (a = 10; a >= 1; a-=1){
		if (a == 1){
		cout << "There was " << a << " in the bed and the little one said, Im so sleepy" << endl;
		continue;
		}
		cout << "There were " << a << " in bed and the little one said roll over, roll over, so they rolled over and 1 feel out" << endl;
		}
}
