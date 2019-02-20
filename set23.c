#include<stdio.h>
void main()
{
int n,i,count=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0)
{
printf("\nit is a prime.");
}
else
{
printf("\nit is not a prime.");
}
return 0;
}
