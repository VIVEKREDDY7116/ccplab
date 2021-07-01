#include<stdio.h>
#include<conio.h>
main()
{
int m,n;
clrscr();
printf("enter the value of m andn:\n");
scanf("%d%d",&m,&n);
while(m<=n)
{
if(m%2==0)
printf("m=%d",m);
m=m+1;
}
return 0;
}