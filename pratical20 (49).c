#include<stdio.h>
#include<unistd.h>
void main()
{
    int i,sec,choice;
menu:
    printf("Enter number of seconds from where you want start the timer : ");
    scanf("%d",&sec);
    if(sec>=0)
    {
    for(i=sec;i>=0;i--)
    {
        if(i!=0)
        {
            printf("Countdown :: %d \n",i);
            sleep(1);
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
     printf("If You want to start the timer again then enter 1 or else any number ::");
     scanf("%d",&choice);
     if(choice==1)
     {
         goto menu;
     }
     else
     {
         printf("Your countdown has completed earlier ...");

     }
    }


