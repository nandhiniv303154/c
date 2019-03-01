#include<stdio.h>
int main()
{
int n,a[10],min=0,i;
scanf("%d",&n);
 for(i=0;i<n;i++)
 {   
  scanf("%d",&a[i]);
 }
  min=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]<min)
    {
      min=a[i];
     }
   }
  printf("result:%d",min);
  return 0;
 }
