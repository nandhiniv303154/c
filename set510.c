#include<stdio.h>
{
int n,temp,flag=0;
printf("Enter the values:");
scanf("%d",&n);
temp=n;
while(temp!=1)
{
if(temp%2!=0)
{
flag=1;
break;
}
temp=temp/2;
}
if(flag==0)
{
printf("\n%d is a power of 2",n);
}
else
{
printf("\n%d is not a power of 2",n);
}
return 0;
}
    
