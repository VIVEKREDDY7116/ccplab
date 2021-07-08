/*student details program*/
#include<stdio.h>
#include<conio.h>
int main()
{
struct student
{
char roll_numb[100];
char name[100],sec[20],dept[40];
int result,fee;
}
stud1,stud2;
clrscr();
printf("\n Enter the details of student1:");
printf("\n name:");
scanf("%s",stud1.name);
printf("\n section:");
scanf("%s",stud1.sec);
printf("\n roll number:");
scanf("%s",stud1.roll_numb);
printf("\n department:");
scanf("%s",stud1.dept);
printf("\n fee:");
scanf("%d",&stud1.fee);
printf("\n result:");
scanf("%d",&stud1.result);
printf("\n enter the details of student2:");
printf("\nname:");
scanf("%s",stud2.name);
printf("\n section:");
scanf("%s",stud2.sec);
printf("\n roll_number:");
scanf("%s",stud2.roll_numb);
printf("\n department:");
scanf("%s",stud2.dept);
printf("\n fee");
scanf("%d",&stud2.fee);
printf("\n result:");
scanf("%d",stud2.result);
{
if(stud1.result>=stud2.result)
{
printf("student1 got the highest score \n details of the student as follows : \n name:%s \n section:%s \nroll_number:%s \n department:%s \nfee:%d\nresult:%d",stud1.name,stud1.sec,stud1.roll_numb,stud1.dept,stud1.fee,stud1.result);
}
else if(stud2.result>=stud1.result)
{
printf("student 2 got the highest marks \n details of the student as follows :\n name:%s \n section:%s \nroll_number:%s \n department:%s \nfee:%d\nresult:%d",stud2.name,stud2.sec,stud2.roll_numb,stud1.dept,stud2.fee,stud2.result);
}
}
getch();
return 0;
}

