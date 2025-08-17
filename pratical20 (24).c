#include<stdio.h>

void main()
{
    int age,choice,p,i;
    printf("Enter total number of people ..");
        scanf("%d",&p);
    printf("------BANK MENU--------");
    printf("Enter 1 to check eligiblity");
    printf("Enter 2 to Exist");
    printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            {
                for(i=1;i<=p;i++)
                {
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>0)
        {
        if(age<18)
        {
            printf("You are not eligible sorry ...");
        }
        else if(age<=59)
        {
            printf("You are eligible for regular savings ....");
        }
        else
        {
            printf("You are able to have senior citizen account ....");
        }
    }
     else
    {
        printf("You have entered wrong age renter again : ");
    }
}
            }
        else if (choice ==2)
        {
            printf("EXIST");

        }
}

