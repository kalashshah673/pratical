#include<stdio.h>
void main()
{
    int ver,hor,i=0,j=1,s=1;

    printf("Enter the size of table vertically : ");
    scanf("%d",&ver);
    printf("Enter the size of table horizontally : ");
    scanf("%d",&hor);
    if(ver<=0 && hor<=0)
    {
        printf("Invalid Inputs....");
    }
    for(i=1;i<=ver;i++)
    {
        for(j=1;j<=hor;j++)
        {
            printf("%d ",(i*j));
        }
        printf("\n");
    }
}
