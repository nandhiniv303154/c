#include <stdio.h>
int main()
{
char s1[50],s2[50];
int n1,n2;
scanf("%s %s",s1,s2);
n1=strlen(s1);
n2=strlen(s2);
if(n1>n2)
{
printf("%s",s1);
}
else if(n2>n1)
{
printf("%s",s2);
}
else
{
printf("%s",s2);
}
return 0;
}
