#include<stdio.h>

void main()
{
    int choice ,wd,bal,dep;
    printf("\n Enter 1 to enter your balance in the bank account :");
    printf("\n Enter 2 to withdraw the amount :");
    printf("\n Enter 3 to deposit the amount in your bank balance : ");
    printf("\n Enter 4 to ----stop----");
    printf("Enter your choice ...");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        if(choice==1)
        {
            scanf("%d",&bal);
            printf("\n your bank balance is %d",bal);
            break;
        }
    case 2:
        if(choice==2)
        {
            scanf("%d",&wd);
            printf("\n your withdraw amount is %d",wd);
            break;
        }
    case 3:
        if(choice==3)
        {
            scanf("%d",&dep);
            printf("\n Your amount that you want to deposit in your bank balance %d : ",dep);
            break;
        }
    case 4:
            if(choice==4)
            {
                    printf("\n Thank you to STOP the process....");
                    break;
            }
    default:
        printf("\n Invalid Input ...");


    }
}
