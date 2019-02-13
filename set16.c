#include<stdio.h>
int main()
{
int year;
scanf("%d",&year);
if(year%4==0)
{
printf("YES,It is a leap year.");
}
else
{
printf("NO,It is not a leap year.");
}
return 0;
}
