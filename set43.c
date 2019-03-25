#include <stdio.h>
int main()
{
char s[50];
int i,count=0;
printf("enter the sentence:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count=count+1;
}
}
printf("\nno of white spaces=%d",count);
return 0;
}
