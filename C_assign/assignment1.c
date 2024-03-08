/*
Write a program to input n numbers on command line argument and
calculate maximum of them
10 25 265 0 365 25 15 36 45 454
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //atoi();
int max = atoi(argv[1]);
    //printf("The Maximum Value is %d",atoi(argv[1+1]));

if(argc ==2)
{
    printf("The Maximum Value is %d",atoi(argv[1]));
}
else
{
for(int i=1;i<argc;i++)
{
    if(atoi(argv[i])<atoi(argv[i+1]))
    {
        if(atoi(argv[i+1])>max)
        max=atoi(argv[i+1]);
    }
    // else
    //  max=atoi(argv[i]);
}
printf("The maximum number is %d",max);
}
    //printf("argc count =%d\n",argc);
// if(atoi(argv[1])<atoi(argv[2]))
//     printf("Greater value is%d",atoi(argv[2]));
// else
//     printf("greater value is%d",atoi(argv[1]));
    return 0;
}


// int main(int argc[2])
// {
//     if(argc[0]>argc[1])
//     {
//         printf("Greater value is",argc[0]);
//     }
//     else
//         printf("Greater value is",argc[1]);
//     return 0;
// }
