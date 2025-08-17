#include<stdio.h>
void main()
{

    int amt,tot;
    float dis;

    printf("Enter total number of amount :");
    scanf("%d",&amt);

    if(amt<=1000)
    {

        printf("\n Sorry no discount applied...");
    }
    else if(amt<=5000)
    {
        dis=0.1;
        printf("\n You will 10 percent discount..");
        tot=amt-(amt*0.1);
    }
    else
    {
            dis=0.2;
            printf("\n You will get 20 percent discount ...");
            tot=amt-(amt*dis);
    }
    printf("\n The total amount before discount %d ",amt);
    printf("\n The discount applied on the basis of your amount is %f",dis);
    printf("\n The amount that you have to pay after discount is : %d",tot);

}
