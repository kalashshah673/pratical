#include<stdio.h>

int main()
{
    int i,m,n,spe,rare,clas,std;
    printf("Enter the book ID from which you want to start ..");
    scanf("%d",&m);
    printf("Enter the book ID from which you want to end ..");
    scanf("%d",&n);
    printf("Enter which book you want to make special..");
    scanf("%d",&spe);
    printf("Enter which book you want to make Rare..");
    scanf("%d",&rare);
    printf("Enter which book you want to make standard edition..");
    scanf("%d",&std);
    for(i=m;i<=n;i++)
    {
        if(i% spe==0)
        {
            printf("BOOK ID : %d (Special Edition) \n ",i);
        }
        else if(i%rare==0)
        {
            printf("BOOK ID :%d (rare collection) \n ",i);
        }
        else if(i%std==0)
        {
            printf("BOOK ID :%d (Standard Edition) \n ",i);
        }
        else
        {
            printf("BOOK ID : %d \n ",i);
        }
    }
    return 0;

}
