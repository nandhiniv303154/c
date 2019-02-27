#include<stdio.h>
int main()
{
int a,b,i,j;
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
int count=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
count=1;
}
if(count==0)
{
printf("%d\n",i);
}
}
}
return 0;
}
