#include <stdio.h>

int main(void) 
{
int n,k;
long long result=1;
scanf("%d",&n);
scanf("%d",&k);
while(k!=0)
{
 result*=n;
 --k;
}
printf("result:%lld",result);
return 0;
}
