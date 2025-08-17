#include<stdio.h>
void main()
{
    int amt,wd,tot=0;
    printf("Enter the amount that you wish to withdraw");
    scanf("%d",&wd);
    printf("Enter the balance that you have in your account");
    scanf("%d",&amt);
     if(amt>=wd)
     {
        tot=amt-wd;
        printf("After withdrawing total balance in your account is : %d",tot);

     }
     else
     {
        printf("Insufficient Balance...");
     }
     printf("Your bank balance before withdrawing is : %d",amt);

}
