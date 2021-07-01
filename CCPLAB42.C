#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int m,sum=0,n;
clrscr();
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("\nsum is %d",sum);
return 0;
}