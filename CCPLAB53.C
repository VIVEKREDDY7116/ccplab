/*DEVELOP A PROGRAM TO FIND AVERAGE OF N NUMBERS */
#include<stdio.h>
#include<conio.h>
void main()
{
int stor[10],n,i;
float avg;
clrscr();
printf("Enter the number of inputs");
scanf("%d",&n);
printf("\nEnter %d inputs",n);
for(i=1;i<=n;i++)
scanf("%d",&stor[i]);
avg=0;
for(i=1;i<=n;i++)
avg+=stor[i];
avg/=n;
printf("\nThe average of%d numbers is %2f",n,avg);
getch();
}
