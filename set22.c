#include<stdio.h>
int main()
{
int n,r=0,rem,t;
printf("Enter the values:");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
r=(r*10)+rem;
n=n/10;
}
if(r==n)
{
printf("\nis a palindrome.");
}
else
{
printf("\nis a not palindrome.");
}
return 0;
}
