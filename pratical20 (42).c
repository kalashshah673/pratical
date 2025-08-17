#include<stdio.h>

void main()
{
   int i;
   for(i=10;i<=100;i+=10)
   {
        if(i==100)
        {
            printf("Tank is full.\n");
        }
        else
        {
            printf("Current water level : %d litres \n ",i);
        }
    }



}
