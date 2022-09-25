#include<stdio.h>
#include<string.h>
struct student
{
int rnumber;
char name[20];
int marks;
char grade;
}stud[60];
void main()
{
int i,n;
float sum=0,avg=0;
printf("Enter the number of students");
scanf("%d",&n);
printf("\nEnter the roll number, Name , Marks and Grade of the student \n");
for(i=1;i<=n;i++)
{
printf("\nStudent %d details\n",i);
scanf("%d",&stud[i].rnumber);
scanf("%s",stud[i].name);
scanf("%d",&stud[i].marks);
fflush(stdin);
stud[i].grade=getchar();
sum+=stud[i].marks;
}
avg=sum/n;
printf("\n Avg marks is %f",avg);
printf("\nStudent Details are:");
printf("\nRoll_number\tName\tMarks\tGrade");
for(i=1;i<=n;i++)
printf("\n%d\t\t%s\t%d\t%c\t",stud[i].rnumber,stud[i].name,stud[i].marks,
stud[i].grade);
printf("\n Details of Students who scored Above avarage Marks\n");
printf("\nRoll_number\tName\tMarks\tGrade\n");
for(i=1;i<=n;i++)
{
if(stud[i].marks >= avg)
printf("\n%d\t\t%s\t%d\t%c\t",
stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
}
printf("\n Details of Students who scored Below avarage Marks\n");
printf("\nRoll_number\tName\tMarks\tGrade\n");
for(i=1;i<=n;i++)
{
if(stud[i].marks < avg)
printf("\n%d\t\t%s\t%d\t%c\t",
stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
}
}