#include<stdio.h>

void main()
{
    int i,j,m,n;
    printf("\n Enter number fs rows..");
    scanf("%d",&m);
    printf("\n Enter number of columns ..");
    scanf("%d",&n);
    printf("\n The pattern is ...");
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1)
            {
                printf("%d",j);
            }
            else if(i==j)
            {
                printf("%d",j);
            }
            else if((i+j)==10)
            {
                printf("%d",j);

            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }

}
