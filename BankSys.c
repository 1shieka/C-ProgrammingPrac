//Implement simple banking system in C with options to deposit, withdraw, and check balance using functions, displaying a menu for user actions.
#include <stdio.h>

float balance = 0.0;

void deposit(float amount) {
    balance += amount;
    printf("Amount deposited: %.2f\n", amount);
    printf("Current balance: %.2f\n", balance);
}

void withdraw(float amount) {
    if (amount <= balance) {
        balance -= amount;
        printf("Amount withdrawn: %.2f\n", amount);
        printf("Current balance: %.2f\n", balance);
    } else {
        printf("Insufficient balance.\n");
    }
}

void checkbalance() {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    int choice;
    float amount; 

    while (1) {
        printf("\nBanking System\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                checkbalance();
                break;
            case 4:
                printf("Exiting the banking system.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}