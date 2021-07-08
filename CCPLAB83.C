/*DEVELOP A C PROGRAM TP PERFORM ARITHMETIC OPERATIONS ON A TWO INTEGERS
 USING POINTERS*/
#include<stdio.h>
#include<conio.h>
int main()
{
int no1,no2;
int *ptr1,*ptr2;
int sum,sub,mult;
float div,rem;
clrscr();
printf("Enter number 1:\n");
scanf("%d",&no1);
printf("enter number2:\n");
scanf("%d",&no2);
ptr1=&no1;//ptr1 stores address of no 1
ptr2=&no2;//ptr2 stores address of no 2
sum=(*ptr1)+(*ptr2);
sub=(*ptr1)-(*ptr2);
mult=(*ptr1)*(*ptr2);
div=(*ptr1)/(*ptr2);
rem=(*ptr1)%(*ptr2);
printf("sum=%d\n",sum);
printf("subtraction=%d\n",sub);
printf("multiplication=%d\n",mult);
printf("division=%f\n",div);
printf("reminder=%f\n",rem);
getch();
return 0;
}