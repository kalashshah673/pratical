#include<stdio.h>

void main()
{
    int ms,cp=0,sc=0,su=0;
    printf("\n There are total 21 matchsticks...");
    menu:
    printf("\n Enter how many you want to pick up but the limit is upto 4 only at a time..");
    scanf("%d",&ms);
    if(ms<=4 && ms>=1)
    {
            printf("\n After your turn computer will pick up matchsticks..");
            cp=5-ms;
            sc=sc+cp;
            su=su+ms;
    }
    else
        {
            goto menu1;
        }
    printf("\n The matchsticks that you have  pick up is %d",ms);
    printf("\n The matchstick that computer  picked up is %d",cp);
    if(su>=21)
    {
        printf("\n The loser of the game is YOU ...");
    }
    else if(sc>=21)
    {
        printf("\n The loser of the game is Computer   ...");
    }
    else
    {
        goto menu;
    }
    menu1:
        printf("Invalid matchsticks input you have enterd please try again....");
}
