#include <stdio.h>
#include "account.h"

void saveToFile();
void loadFromFile();

int main()
{
    int choice;

    loadFromFile();

    while(1)
    {
        printf("\n===== BANK SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: searchAccount(); break;
            case 4: depositMoney(); break;
            case 5: withdrawMoney(); break;
            case 6:
                saveToFile();
                printf("Saved. Exiting...\n");
                return 0;
        }
    }
}
