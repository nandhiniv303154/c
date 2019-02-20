#include <stdio.h>

int main(void) 
{
int n,k,result=1;
scanf("%d",&n);
scanf("%d",&k);
while(k!=0)
{
 result*=n;
 --k;
}
printf("result:%d",result);
return 0;
}
