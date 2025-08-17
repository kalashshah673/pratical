#include<unistd.h>
#include<stdio.h>
void main()
{
    int i=1,md,min;
    float d=0;
    printf("Enter the marathon distance difference: ");
    scanf("%d",&md);
    printf("Total minutes in which you want you covered : ");
    scanf("%d",&min);
    for( ; ; )
    {
        while(i>=0)
        {
            if(i<=min)
            {
                d=d+md;
                printf("\n Minute %d : Distance covered = %.1f Km",i,d);
             i++;
             sleep(1);

            }


        }
   }
   printf("Total minutes taken to be covered %d ",min);
}
