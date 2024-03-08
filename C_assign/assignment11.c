/*
Create a structure called Employee that includes three fields - a first
name (type String), a last name (type String) and a monthly salary (double).
Write functions to initialize the fields, print them and modify the values in
the given object. Example methods:
 void emp_init(struct emp* e);
 void set_salary(struct emp *e, double sal);
 void emp_display(struct emp *e);
Write the test code in the main(). Create two emp objects and display each
object’s yearly salary. Then give each Employee a 10% raise and display
each Employee’s yearly salary again
*/

#include<stdio.h>
struct employee
{
   char First_name [20];
   char last_name [20];
   double salary;
};

void emp_init(struct employee *e1)
   {
        printf("Enter the Fist name of emloyee\n");
        gets(e1->First_name);        
        printf("Enter the Last name of emloyee\n");
        gets(e1->last_name);    
        printf("Enter the Salary of emloyee\n");
        scanf("%d",&e1->salary);
   }

void set_salary(struct employee *e, double *sal)
    {
        printf("\n%d",*sal);
        e->salary=*sal;
    }   
void emp_display(struct employee *e1)
    {
        printf("\nEmployee first name : %s",e1->First_name);
        printf("\nEmployee Last name : %s",e1->last_name);
        printf("\nEmployee salary : %d",e1->salary);
    }
int main()
{
    struct employee e1, e2;
    emp_init(&e1);
  //  printf("hellp");
    emp_display(&e1);
    int sal=20000;
    set_salary(&e1, &sal);
    emp_display(&e1);
    return 0;
}
