#include<stdio.h>

void main()
{
    int i,j,m,n;
    printf("\n Enter number os rows..");
    scanf("%d",&m);
    printf("\n Enter number of columns ..");
    scanf("%d",&n);
    printf("\n The pattern is ...");
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("0");
            else
            printf("1");
        }
        printf("\n");
    }

}
