#include <stdio.h>
int main()
{
 int a[10],n,temp,i,j,m;
 printf("Enter the size:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=a[i];
  }
 }
 if(n%2==0)
 {
 m=(a[n/2]+a[(n-1)/2])/2;
 }
 else
 {
  m=a[n/2];
 }
 printf("%d",m);
 return 0;
}
