#include<stdio.h>
void main()
{
    int ms=21,up,cp;
    printf("\n 1. The game starts with 21 matchsticks.");
    printf("\n 2. The user is asked to pick 1, 2, 3, or 4 matchsticks.");
    printf("\n 3. After the user picks, the computer makes its pick.");
    printf("\n 4. The player who is forced to pick the last matchstick loses the game");
    printf("\n Lets starts the game...");
    while(ms>1)
    {
        printf("\n Enter the matchstick that you want to pick up: ");
        scanf("%d",&up);
        if(up<1 || up>4)
        {
            printf("\n Invalid number of matchsticks you have pick up..");
        }
        printf("\n You have picked up %d matchsticks..",up);
        ms=ms-up;
        printf("\n You are left with %d matchsticks..",ms);
        cp=5-up;
        ms=ms-cp;
        printf("\n Computer has picked up %d matchsticks..",cp);
        printf("\n You are left with %d matchsticks..",ms);
    }
    printf("\n You are left with only one matchstick...");
    printf("\n ---Sorry you have lose the game and Computer wins---");
}
