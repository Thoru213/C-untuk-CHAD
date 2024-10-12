#include <stdio.h>
#include <conio.h>
main()
{
int bil;
for(bil=1; bil<=10; ++bil)
{
if(bil==6)
continue;
printf(" %d ",bil);
}
getch();
}

