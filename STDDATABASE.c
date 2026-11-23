#include<stdio.h>

void main()
{
int rollNo,marks;
char name[50],department[50];

printf("Enter Roll Number:");
scanf("%d",&rollNo);

printf("Enter Name:");
scanf("%s",name);

printf("Enter Department:");
scanf("%s",department);

printf("Enter Marks:");
scanf("%d",&marks);

printf("\nSTUDENT RECORD\n");
printf("Roll Number:%d\n",rollNo);
printf("Name:%s\n",name);
printf("Department:%s\n",department);
printf("Marks:%d\n",marks);
}
