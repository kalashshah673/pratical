#include <stdio.h>
int main()
    {
    int choice, qty;
    int total=0;

    printf("\n------ MENU ------\n");
    printf("1. Burger - 150\n");
    printf("2. Pizza - 200\n");
    printf("3. Pasta - 120\n");
    printf("4. Sandwich - 100\n");
    printf("5. French Fries - 80\n");
    printf("Enter 0 to finish ordering\n");

    while (choice!=0) {
        printf("\nEnter your choice (0 to finish): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice < 0 || choice > 5) {
            printf("Invalid choice! Please select from 1-5 or 0 to exit.\n");
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (qty <= 0) {
            printf("Invalid quantity! Please enter a positive number.\n");
            continue;
        }
        if(choice==1)
        {

            printf("You have ordered Burger..");
            printf("Number of quantity that you have ordered: %d",qty);
        }
        else if(choice==2)
        {

            printf("You have ordered Pizza...");
            printf("Number of quantity that you have ordered: %d",qty);
        }
        else if(choice==3)
        {

            printf("You have ordered Pasta...");
            printf("Number of quantity that you have ordered: %d",qty);
        }
        else if(choice==4)
        {

            printf("You have ordered Snadwhich...");
            printf("Number of quantity that you have ordered: %d",qty);
        }
        else if(choice==5)
        {

            printf("You have ordered French fries...");
            printf("Number of quantity that you have ordered: %d",qty);
        }
        else
        {
            printf("Invalid input ...");

        }

        switch (choice) {
            case 1:
                total += qty * 150;
                break;
            case 2:
                total += qty * 200;
                break;
            case 3:
                total += qty * 120;
                break;
            case 4:
                total += qty * 100;
                break;
            case 5:
                total += qty * 80;
                break;
        }
    }
      printf("\nTotal Amount: %d \n",total);
if(total>=500)
{
    total=total-(total*0.05);
}
    printf("\nTotal Amount: %d \n",total);

    return 0;
}
