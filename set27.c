#include <stdio.h>
int main()
{
 int n,rem,sum=0,t;
 printf("Enter the three number:");
 scanf("%d",&n);
 t=n;
 while(n!=0)
 {
 rem=n%10;
 sum+=rem*rem*rem;
 n/=10;
 }
 if(t==sum)
 {
 printf("yes",n);
 }
 else
 {
 printf("no",n);
 }
 return 0;
}
