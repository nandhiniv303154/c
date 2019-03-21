#include <stdio.h>
#include<string.h>

int main()
{
char s[10];     
int i,l,flag=0;
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>='0'&&s[i]<='9')
{
flag=1;
}
}
if(flag==1)
{
 printf("yes");
}
else
{
printf("no");
}
return 0;
}
