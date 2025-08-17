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
        else if(age<=59)
        {
            printf("You are eligible for regular savings ....");
        }
        else
        {
            printf("You are able to have senior citizen account ....");
        }
    }
    else
    {
        printf("You have entered wron age reenter again : ");
    }
}

