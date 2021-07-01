/*PROGRAM TO CONCENTRATE TWO STRINGS AND FIND THE LENGTH
 OF RESULTANT STRING WITHOUT USING BUILT IN FUNCTION*/
#include<stdio.h>
#include<conio.h>
void main()
{
char p[100],m[100],n[100];
int i=0,j=0;
clrscr();
printf("\n ENTER THE FIRST WORD");
gets(p);
printf("\n ENTER THE SECOND WORD");
gets(m);
while(p[i]!='\0')
{
n[j]=p[i];
i++;
j++;
}
i=0;
while(m[i]!='\0')
{
n[j]=m[i];
i++;
j++;
}
n[j]='\0';
printf("combination of two words is\n");
puts(n);
getch();
}