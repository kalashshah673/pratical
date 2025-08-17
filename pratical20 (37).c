#include<stdio.h>

void main()
{
    int i,book=50;
    for(i=1;i<=book;i++)
    {
        if(i% 5==0)
        {
            printf("BOOK ID : %d (Special Edition) \n ",i);

        }

        else
        {
            printf("BOOK ID : %d \n ",i);
        }
    }

}
