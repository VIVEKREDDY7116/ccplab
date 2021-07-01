#include<stdio.h>
#include<conio.h>
main()
{
int x,i;
clrscr();
printf("input an integer:");
scanf("%d",&x);
for(i=1;i<=100;i++)
{
if((i%x)==3)
{
printf("%d\n",i);
}
}
return 0;
}