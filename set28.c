#include<stdio.h>
int main()
{
int a1,a2,n,i,rem,t;
printf("enter the number:");
scanf("%d %d",&a,&b);
printf("print the two intervel number:");
for(i=a1;i<a2;i++)
{
t=i;
n=0;
while(t!=0)
{
rem=t%10;
n+=rem*rem*rem;
t/=10;
}
}
if(n==i)
{
printf("%d",i);
}
return 0;
}
