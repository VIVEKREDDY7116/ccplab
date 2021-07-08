/*demonstrate how to read data from the keyboard ,write it to a file called
INPUT,again read the same data from the INPUT file,and display it on the
screen/console*/
#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
FILE *fp;
clrscr();
printf("Enter data:");
fp=fopen("BMSCE.txt","w");
fgets(a,10,stdin);
fclose(fp);
printf("\noutput\n");
fp=fopen("BMSCE.txt","r");
if(fp==NULL)
{
printf("Error");
exit(1);
}
fgets(a,10,fp);
puts(a);
fclose(fp);
getch();
}