#include <stdio.h>
int main()
{
    int n,rem,r=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		r=(r*10)+rem;
		n=n/10;
	}
	n=r;
	while(n!=0)
	{
		rem=n%10;
		printf("%d ",rem);
		n=n/10;
	}
    return 0;
}
