/*DEVELOP A C PROGRAM TO DETERMINE WHETHER THE ENTERED CHARACTER IS AVOWEL OR CONSONANT USING SWITCH CASE*/
#include<stdio.h>
#include<conio.h>
main()
{
char ch;
clrscr();
printf("enter a character\n");
scanf("%c",&ch);
switch(ch)
{
case 'a':
printf("vowel");
break;
case 'e':
printf("vowel");
break;
case 'i':
printf("vowel");
break;
case 'o':
printf("vowel");
break;
case 'u':
printf("vowel");
break;
default:
printf("consonant");
}
return 0;
}