/*DEVELOP A PROGRAM TO CALCULATE THE SUM OF SQUARES OF FIRST N ODD NUMBERS*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,square,sum,i;
clrscr();
printf("\nEnter a number");
scanf("%d",&n);
sum=0;
for(i=1;i<=2*n;i=i+2)
{
square=i*1;
sum=sum+square;
}
printf("The sum of squares of first %d odd numbers is%d",n,sum);
getch();
}