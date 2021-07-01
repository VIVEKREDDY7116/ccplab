#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[100],strr[100];
int i,j,len,c=0;
clrscr();
printf("\n enter a string:");
gets(str);
j=0;
len=strlen(str);
for(i=len-1;i>=0;i--)
{
strr[j++]=str[i];
}
strr[i]='\0';
printf("\n string after the reversing=%s\n",strr);
for(i=0;i<len/2;i++)
{
if(str[i]==str[len-i-1])
c++;
}
if(c==i)
printf("string is palindromwe");
else
printf("string is not palindrome");
getch();
return 0;
}