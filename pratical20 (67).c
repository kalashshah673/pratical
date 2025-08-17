#include<stdio.h>
void main()
{
    int i;
    for(i=10;i<=100;i+=10)
    {
        if(i!=100)
        {
            printf("\n Current water level : %d litres",i);
        }
        else
        {
            printf("\n Tank is full : ");
        }
    }
}
