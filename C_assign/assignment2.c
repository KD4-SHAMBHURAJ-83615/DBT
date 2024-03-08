/*
Write a program to calculate a Factorial of a number.
*/
#include<stdio.h>

int main()
{
    int num;
    printf("enter the to find the factorial");
    scanf("%d",&num);
    printf("%d",num);
    int i;
    int fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial of %d is :%d",num,fact);
    return 0;
}
