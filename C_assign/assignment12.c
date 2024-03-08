/*
    Write a Program to reverse the letters present in the given String. Do
    not use strrev() function.
*/

#include<stdio.h>


    void rev_string(char *ch)
    {
        if(*ch!='\0')
        {
            ch++;
            rev_string(ch);
            printf("%c",*ch);
        }
        //printf("%c",*ch);
    }
int main()
{
    char ch[50]="Saurabh";
    // printf("Enter the string");
    // gets(ch);
    // for(int i=0;ch[i]!='\0';i++ )
    // {
    //     printf("%c",ch[i]);
    // }
    rev_string(ch);
    return 0;
}

// #include<stdio.h>

// void add(int a, int b)
// {
//     printf("\n The total is %d",a+b);
// }

// int main()
// {
//     add(20,30);
//     return 0;
// }
