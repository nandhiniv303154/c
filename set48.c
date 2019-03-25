#include <stdio.h>

int main()
{
 int a,b;
 printf("Enter a and b value:");
 scanf("%d %d",&a,&b);
 a=a^b;
 b=b^a;
 a=a^b;
 printf("%d %d",a,b);
 return 0;
}
