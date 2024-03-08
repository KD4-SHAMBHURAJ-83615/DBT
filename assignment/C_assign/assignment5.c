/*
Write a program to check the input characters for uppercase,
lowercase, number of digits and other characters. Display appropriate
message.
*/

#include<stdio.h>

int main()
{   
    char ch;
    printf("Enter the character for check\n");
    scanf("%c",&ch);
    printf("\n %d",ch);
    //ch =(int)ch;
    if (64<ch && ch<91)
    {
        printf("\n The character is UPPERCASE");
    }
    else if (96<ch && ch<123)
    {
        printf("\n The character is LOWERCASE");
    }
    else if (47<ch && ch<58)
    {
        printf("\n The character is DIGIT");
    }
    else
    printf("\n The character is other character");
    return 0;
}
