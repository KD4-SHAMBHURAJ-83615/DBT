/*
Write a program to accept a number from user using command line
argument and display its table.
*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    for( i=1; i<11; i++)
    {
        printf("\n%d * %d = %d",atoi(argv[1]),i,atoi(argv[1])*i);
    }
    return 0;
}
