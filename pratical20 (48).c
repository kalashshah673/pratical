#include<stdio.h>

void main()
{
    int i,sec;

    printf("Enter number of seconfs from where you want start the timer : ");
    scanf("%d",&sec);
    if(sec>=0)
    {
    for(i=sec;i>=0;i--)
    {
        if(i!=0)
        {
            printf("Countdown :: %d \n",i);
        }
        else
        {
            printf("Contdown Completed..");
        }
    }
    }
        else
        {
        printf("Input a validated value..");
        }
    }


