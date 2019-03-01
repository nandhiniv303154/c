#include <stdio.h>

int main()
{
    int i,n,a,d,sum=0;
    printf("\n Enter the number of arithmetic progression:");
    scanf("%d",&n);
    printf("\n Enter a and d values:");
    scanf("%d%d",&a,&d);
    for(i=1;i<=n;i++)
   {
   sum=(n*(2*a+(n - 1)*d))/2;
 
   }
   printf("\nResult is %d",sum);

   return 0;
}
