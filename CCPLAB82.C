/*DEVELOP A C PROGRAM TO READ AND POINT THE THREE BOOK DETAILS (i.e.
TITLE,AUTHOR,PRICE,NO .OF PAGES ,DATE OF PUBLICATION).ALSO PRINT THE BOOK DETAILS
WITH THE HIGHEST PRICE */
#include<stdio.h>
#include<conio.h>
int main()
{
struct book
{
char author[20];
char title[20];
float price;
int no_pages;
char publication[20];
}
book1,book2,book3;
clrscr();
printf("enter the book-1 details :author,title,price,number of pages,date of publication\n");
scanf("%s%s%f%d%s",book1.author,book1.title,&book1.price,&book1.no_pages,book1.publication);
printf("enter the book-2 details :author,title,price,number of pages,date of publication\n");
scanf("%s%s%f%d%s",book2.author,book2.title,&book2.price,&book2.no_pages,book2.publication);
printf("enter the book-3 details :author,title,price,number of pages,date of publication\n");
scanf("%s%s%f%d%s",book3.author,book3.title,&book3.price,&book3.no_pages,book3.publication);
if(book1.price>=book2.price&&book1.price>=book3.price)
{
printf("book-1 has the highest price:its details are:Author=%s\n,title=%s\n,price=%f\n,number of pages=%d\n,date of publication=%s\n",book1.author,book1.title,book1.price,book1.no_pages,book1.publication);
}
else if(book2.price>=book1.price&&book2.price>=book3.price)
{
printf("book-2 has the highest price:its details are:author=%s\n,title=%s\n,price=%f\n,number of pages=%d\n,date of publication=%s\n",book2.author,book2.title,book2.price,book2.no_pages,book2.publication);
}
else
{
printf("book-3 has the highest price:its details are:author=%s\n,title=%s\n,price=%f\n,number of pages=%d\n,date of publication=%s\n",book3.author,book3.title,book3.price,book3.no_pages,book3.publication);
}
return 0;
}