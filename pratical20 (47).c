#include<stdio.h>

void main()
{
    int i,sec;

    printf("Enter number of seconfs from where you want start the timer : ");
    scanf("%d",&sec);

    for(i=sec;i>=0;i--)
    {
        printf("Countdown :: %d \n",i);
    }

}
