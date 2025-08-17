#include<stdio.h>

void main()
{
    int i,book=50,m,n,spe;
    printf("Enter the book ID from which you want to start ..");
    scanf("%d",&m);
    printf("Enter the book ID from which you want to end ..");
    scanf("%d",&n);
    printf("Enter which book you want to make special..");
    scanf("%d",&spe);
    for(i=m;i<=n;i++)
    {
        if(i% spe==0)
        {
            printf("BOOK ID : %d (Special Edition) \n ",i);

        }

        else
        {
            printf("BOOK ID : %d \n ",i);
        }
    }

}
