/*wap to convert time(hours and minuites ) in to minuites using functions*/
#include<stdio.h>
#include<conio.h>
int hrs,mins,total_mins;
clrscr();
printf("enter hours and minuites:");
scanf("%d%d",&hrs,&mins);
total_mins=hrs_to_min(hrs,mins);
printf("\ntotal minuites=%d",totL_mins);
getch();
}
int hrs_to_min(int hrs,int mins)