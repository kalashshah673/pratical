#include <stdio.h>

int main() {
    int choice, wd = 0, bal = 0, dep = 0;

menu: // label for going back to menu
    printf("\n==== ATM Menu ====");
    printf("\n1. Enter your balance");
    printf("\n2. Withdraw amount");
    printf("\n3. Deposit amount");
    printf("\n4. Stop");
    printf("\n5. Know amount after deposit");
    printf("\n6. Know amount after withdrawal");
    printf("\n7. Process bank balance");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter your bank balance: ");
            scanf("%d", &bal);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &wd);
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &dep);
            break;

        case 4:
            printf("Thank you! Process stopped.\n");
            return 0; // exit program

        case 5:
            bal = bal + dep;
            printf("Your balance now is: %d\n", bal);
             break;
        case 6:
            if (bal >= wd) {
                bal = bal - wd;
                printf("Your balance now is: %d\n", bal);
            } else {
                printf("Insufficient Balance...\n");
            }
            break;

        case 7:
            printf("Processing your bank balance...\n");
            break;

        default:
            printf("Invalid Input...\n");
    }

    goto menu; // jump back to menu
    return 0;
}
