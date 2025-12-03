#include <stdio.h>
#include <string.h>

struct Bank {
    int acc_no;
    char name[50];
    float balance;
};

int main() {
    struct Bank customer[100];
    int n = 0, choice, acc_no, i;
    float amount;
    char name[50];
    int found;

    while (1) {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &customer[n].acc_no);
            printf("Enter Name: ");
            getchar(); 
            gets(customer[n].name);
            printf("Enter Initial Balance: ");
            scanf("%f", &customer[n].balance);
            printf("Account created successfully!\n");
            n++;
            break;

        case 2:
            printf("Enter Account Number: ");
            scanf("%d", &acc_no);
            found = 0;
            for (i = 0; i < n; i++) {
                if (customer[i].acc_no == acc_no) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    customer[i].balance += amount;
                    printf("Amount deposited successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Account not found!\n");
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &acc_no);
            found = 0;
            for (i = 0; i < n; i++) {
                if (customer[i].acc_no == acc_no) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount <= customer[i].balance) {
                        customer[i].balance -= amount;
                        printf("Withdrawal successful!\n");
                    } else {
                        printf("Insufficient balance!\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Account not found!\n");
            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &acc_no);
            found = 0;
            for (i = 0; i < n; i++) {
                if (customer[i].acc_no == acc_no) {
                    printf("Account Holder: %s\n", customer[i].name);
                    printf("Balance: %.2f\n", customer[i].balance);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Account not found!\n");
            break;

        case 5:
            printf("\n--- All Account Details ---\n");
            for (i = 0; i < n; i++) {
                printf("Account No: %d\n", customer[i].acc_no);
                printf("Name: %s\n", customer[i].name);
                printf("Balance: %.2f\n", customer[i].balance);
                printf("--------------------------\n");
            }
            break;

        case 6:
            printf("Thank you for using the system!\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
