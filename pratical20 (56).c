#include<stdio.h>
void main()
{
    int i=1;
    float d=0;

    for( ; ; )
    {
        while(i>=0)
        {
            if(i<=20)
            {
                d=d+0.5;
                printf("\n Minute %d : Distance covered = %.1f Km",i,d);
             i++;

            }


        }
   }
}
