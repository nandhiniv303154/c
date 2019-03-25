#include <stdio.h>
int main()
{
int m,h,min,secs=00;
printf("enter the time in minutes:");
scanf("%d",&m);
h=m/60;
min=m%60;
if(min>60)
{
secs=min%60;
min=min-secs;
}
printf("%d %d %d",h,min,secs);
return 0;
}
