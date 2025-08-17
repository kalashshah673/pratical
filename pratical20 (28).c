#include<stdio.h>
void main()
{
    int p,i;
    float amt,tot,choice,gst;
    float dis;

    printf("Enter total number of people : ");
    scanf("%d",&p);
   for(i=1;i<=p;i++)
   {
       printf("Enter total number of amount :");
    scanf("%f",&amt);
    printf("Enter your choice 1 if you have registered or else any number ,...");
    scanf("%f",&choice);
    if(amt<=1000)
    {

        printf("\n Sorry no discount applied...");
    }
    else if(amt<=5000)
    {
        dis=0.1;
        printf("\n You will 10 percent discount..");
        tot=amt-(amt*dis);
    }
    else
    {
            dis=0.2;
            printf("\n You will get 20 percent discount ...");
            tot=amt-(amt*dis);
    }
    gst=tot+(tot*0.05);
    if(choice==1)
    {
        printf("Thank you for register...");
        printf("You will get additional 5 percent discount");
        gst=gst-(gst*0.05);

    }
    else if(choice !=1)
    {
        printf("No additional disconut will be provided....");
    }

    printf("\n The total amount before discount %f ",amt);
    printf("\n The discount applied on the basis of your amount is %f",dis);
    printf("\n The amount that you have to pay after discount is : %f",gst);
   }
}
