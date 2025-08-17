#include<stdio.h>
void main()
{
    int i,j,m;

    printf("Enter value .....");
    scanf("%d",&m);


    for(i=1;i<=m;i++)
    {
       for(j=1;j<m-i;j++)

           printf(" ");

       for(j=1;j<=i;j++)

           printf("%d",j);

        for(j=i-1;j>=1;j--)

           printf("%d",j);


       printf("\n");
    }

}

