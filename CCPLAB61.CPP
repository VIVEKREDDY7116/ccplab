/*WRITE A PROGRAM TO FIND SUM OF TWO MATRICES*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],b[5][5],m1,n1,m2,n2,i,j;
clrscr();
printf("Enter number of rows and cols of a=");
scanf("%d%d",&m1,&n1);
printf("\nEnter number of rows and cols of b=");
scanf("%d%d",&m2,&n2);
if(m1!=m2||n1!=n2)
{
printf("\nthe matrix of the given size can't be added");
getch();
void exit();
}
printf("\nEnter %d matrix elements\n",m1*n1);
for(i=0;i<m1;i++)
for(j=0;j<n1;j++)
scanf("%d",&a[i][j]);
printf("\nEnter %d matrix elements\n",m2*n2);
for(i=0;i<m2;i++)
for(j=0;j<n2;j++)
scanf("%d",&b[i][j]);
printf("\n\n The elements of the first matrix is");
for(i=0;i<m1;i++)
{
printf("\n");
for(j=0;j<n1;j++)
printf("%d\t",a[i][j]);
}
printf("\n\nThe elements of the second matriz is");
for(i=0;i<m2;i++)
{
printf("\n");
for(j=0;j<n2;j++)
printf("%d\t",b[i][j]);
}
printf("\n\nThe sum of the two given matrices is\n");
for(i=0;i<m1;i++)
{
printf("\n");
for(j=0;j<n1;j++)
{
a[i][j]+=b[i][j];
printf("%d\t",a[i][j]);
}
}
getch();
}