/*WAP TO FIND TRANSPOSE OF A GIVEN MATRIX*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],n,m,i,j;
clrscr();
printf("Enter the size of the matrix in the format rows and columns");
scanf("%d%d",&m,&n);
printf("\nEnter the matrix elements in row-wise order\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("The entered matrix before transposing is\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
}
printf("\nThe matrix after transpose is");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%d\t",a[j][i]);
}
}
getch();
}