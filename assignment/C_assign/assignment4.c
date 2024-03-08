/*
Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F
*/

#include<stdio.h>

void accept_mark(int arr[5])
{
    for(int i=0;i<5;i++)
    {
        printf("Enter the mark for subject between 0 to 100 %d\n",i+1);
        //label :
        scanf("\n%d",&arr[i]);
        // if ( arr[i]<100 && arr[i]>=0)
        // {

        // }
        // else
        // goto label;
    }

}
void display_grade(int arr[5])
{   
    printf("\n%d",arr[1]);
    int total =arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    total=total*100;
    printf("total is %d",total);
    int avg=(total/500);
    printf("\n average %d",avg);
    if (avg>=90)
    printf("\n Grade : EX");
    else if (avg>=80 && avg<90)
    printf("\n Grade : A");
    else if (avg>=70 && avg<80)
    printf("\n Grade : B");
    else if (avg>=60 && avg<70)
    printf("\n Grade : C");
    else if (avg<=60)
    printf("\n Grade : F");
}

int main()
{
    int arr[5];
    accept_mark(arr);
    display_grade(arr);
    return 0;
}
