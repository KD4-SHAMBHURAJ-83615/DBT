/*
Q9. Accept an integer number and when the program is executed print the
binary, octal and hexadecimal equivalent of the given number.

Sample Output:
terminal> java Test
Enter Number : 20
Given Number :20
Binary equivalent :10100
Octal equivalent :24
Hexadecimal equivalent :14
Hint: Use bitwise operators for binary conversion. Octal/Hexadecimal
conversion to be done by repetitive division using recursion.
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    printf("\nGiven NUmber : %d",num);
    printf("\nOctal equivalent : %o",num);
    printf("\nHexadecimal equivalent: %x",num);
    printf("\nEntered NUmber : Ob%d ",num);    
    return 0;
}
