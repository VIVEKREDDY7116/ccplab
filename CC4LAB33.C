/*develop a c program to determine the month given input in the range 1-12
 using switch case statement*/
#include<stdio.h>
#include<conio.h>
main()
{
int monthnumber;
clrscr();
printf("enter month number\n");
scanf("%d",&monthnumber);
switch(monthnumber)
{
case 1:
printf("january\n");
break;
case 2:
printf("february\n");
break;
case 3:
printf("march\n");
break;
case 4:
printf("april\n");
break;
case 5:
printf("may\n");
break;
case 6:
printf("june\n");
break;
case 7:
printf("july\n");
break;
case 8:
printf("august\n");
break;
case 9:
printf("september\n");
break;
case 10:
printf("october\n");
break;
case 11:
printf("november\n");
break;
case 12:
printf("december\n");
break;
default:
printf("invalid month number");
break;
}
return 0;
}
