#include<stdio.h>

void main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>0)
    {
    if(age<18)
    {
        printf("You are not eligible sorry ...");
    }
    else
    {
        printf("You are eligible ....");
    }
    }
    else
    {
        printf("You have entered wron age reenter again : ");
    }
}

