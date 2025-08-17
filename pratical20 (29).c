#include<stdio.h>
int main()
{
    int price,choice;
    printf("------Food menu-------");
    printf("\n Enter 1 to order burger...");
    printf("\n Enter 2 to order Pizza...");
    printf("\n Enter 3 to order Pasta...");
    printf("\n Enter 4 to order Sandwhich...");
    printf("\n Enter 5 to order French fries...");
    printf("\n Enter 6 to exist...");
    printf("Enter your choice one by one...");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
         price=150;
         break;
    case 2:
        price=200;
        break;
    case 3:
         price=120;
         break;
    case 4:
        price=100;
        break;
    case 5:
        price=80;
        break;
    default:
        printf("\n Invalid choice....");
        return 0;
    }
    printf("Total amount is %d",price);
}
