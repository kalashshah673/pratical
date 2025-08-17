#include<stdio.h>
#include<unistd.h>
void main()
{
    int i,cap,rate;
    printf("What is the Refill rate of the tank per minute ? ");
    scanf("%d",&rate);
    printf("What is your tank capacity ?");
    scanf("%d",&cap);
   for(i=10;i<=cap;i+=rate)
   {
        if(i==100)
        {
            printf("Tank is %d percentage full.\n",i);
        }
        else
        {
            printf("\n Current water level : %d litres \n ",i);
            printf("\n Tank is %d percentage full",i);
            sleep(1);
        }
    }
}
