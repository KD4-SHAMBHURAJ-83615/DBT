/*
Write a program to calculate Fibonacci Series up to n numbers
0,1,1,2,3,5,8,13,21,34,55,
*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number for fibonacci series");
    scanf("%d",&num);
    int i;
    int num1=0;
    int num2=1;
       printf("\n %d",num1);
       printf("\n %d",num2);
    num =num-1;
    for(i=0;i<num;i++)
    {
       printf("\n %d",num1+num2);
       int temp =num2;
       num2=num1+num2;
       num1=temp;
    }
    return 0;
}
