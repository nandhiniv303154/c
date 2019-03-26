#include <stdio.h>
int main()
{
int a[100];
int i,n;
printf("enter the size of the array:");
scanf("%d",&n);
printf("\n the array elements are:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
int min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("\n%d",min);
printf("\n%d",max);
return 0;
}
