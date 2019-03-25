#include <stdio.h>
int main()
{
int sh,sm,h,m; 
int r1,r2,res,min,sec;
printf("enter the start time hours and minutes");
scanf("%d %d",&sh,&sm);
printf("\nenter the end time hours and minutes");
scanf("%d %d",&h,&m);
if(sh>h)
{
h=h+12;
}
r1=(sh*60)+sm;
r2=(h*60)+m;
res=r2-r1;
min=res/60;
sec=res%60;
printf("\n%dhr:%dsec\n%dhr:%dsec",sh,sm,h,m);
printf("\nthe difference is:\n%dhr:%dmin",min,sec);
return 0;
}
