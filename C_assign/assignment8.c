/*
Write a program to read the name of a student (studentName), roll
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
alphanumeric string. Display the data as read. Hint: Create a Student
structure and write appropriate functions.
*/

#include<stdio.h>

struct student
{
    char name [20];
    int ROLL_NO;
    int Total_marks_obtained;
};
void Accept(struct student *ptr)
{
    printf("Enter the name of student\n");
    gets(ptr->name);
    printf("Enter the Roll number of student\n");
    scanf("%d",&ptr->ROLL_NO);
    printf("Enter the total marks obtained out of 100\n");
    scanf("%d",&ptr->Total_marks_obtained);
}
void display(struct student *ptr)
{
    printf("\nStudent Name : %s",ptr->name);
    printf("\nRoll Number: %d",ptr->ROLL_NO);
    printf("\nTotal marks obtained: %d",ptr->Total_marks_obtained);
}

int main()
{
   struct student s1;
   s1.name;
   Accept(&s1);
   display(&s1);
    return 0;
}
