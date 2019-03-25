#include <stdio.h>
int main()
{
char a[10],b[10];
int n1,n2,i,j;
scanf("%s %s",&a,&b);
n1=strlen(a);
n2=strlen(b);
for(i=0;i<n2;i++)
{
a[n1]=b[i];
n1++;
}
printf("%s",a);
return 0;
}
