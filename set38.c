#include <stdio.h>
int main()
{
 int s[10],n,i;
 printf("enter the element:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&s[i]);
 }
 for(i=0;i<n;i++)
 {
 printf("\n%d%d",s[i],i);
 }
 return 0;
}
