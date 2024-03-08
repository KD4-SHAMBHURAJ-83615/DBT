/*
Q10. Read at most 10 names of students and store them into an array of
char nameOfStudents[10][50]. Sort the array and display them back. Hint:
Use qsort() method
*/

#include<stdio.h>

int main()
{   

    char nameofstudent [10][50];

    for( int i=0; i<10;i++)
    {
        printf("Enter the student Name\n");
        gets(nameofstudent [i]);
        //scanf("%s" )
    }    

     for( int i=0; i<10;i++)
    {
        printf("student Name : %s\n",nameofstudent[i]);
    }  
    return 0;
}
