/*PROGRAM TO COPY ONE STRING TO ANOTHER STRING AND FIND ITS LENGTH WITHOUT
USINGBUILT IN FUNCTION*/
#include<stdio.h>
#include<conio.h>
void main()
{
char p[100],m[100];
int i,length =0;
clrscr();
printf("\nENTER THE STRING :");
gets(p);
i=0;
while (p[i] !='\0')
{
m[i]=p[i];
i++;
}
for(i=0;m[i] !='\0';i++)
{
length++;
}
m[i]='\0';
printf("\n copied string is %s\t",m);
printf("the lenght of the string is number of characters in it\n");
printf("so,the length of %s=%d\n",m,length);
}