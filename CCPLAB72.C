/*PROGRAM TO CONCATINATE TWO STRINGS AND FIND THE LENGTH
 OF RESULTANT STRING WITHOUT USING BUILT IN FUNCTION*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20],str2[20],str3[40];
int i=0,j=0;
clrscr();
printf("Enter the first string\n");
gets(str1);
printf("enter the second string\n");
gets(str2);
while(str1[i]!='\0')
{
str3[j]=str1[i];
i++;
j++;
}
i=0;
while(str2[i]!=0)
{
str3[j]=str2[i];
i++;
j++;
}
str3[j]='\0';
printf("\n the concatenated string is\n");
puts(str3);
printf("\n the lenght of the concatenated string is%d",j);
getch();
}