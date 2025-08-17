#include<stdio.h>

void main()
{
    int i,j,m;

    printf("Enter value .....");
    scanf("%d",&m);

    for(i=m;i>=1;i--)
    {
        for(j=0;j<m-i;j++)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
            for(j=2;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
    }


        for(i=1;i<=m;i++)
        {
            for(j=0;j<m-i;j++)
                {
                    printf("  ");
                }
            for(j=i;j>=1;j--)
                {
                    printf("%d ",j);
                }
            for(j=2;j<=i;j++)
                {
                    printf("%d ",j);
                }
            printf("\n");
        }




}
