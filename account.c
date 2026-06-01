#include <stdio.h>
#include <string.h>
#include "account.h"

Account a[100];
int count = 0;

void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &a[count].accNo);

    printf("Enter Name: ");
    scanf("%s", a[count].name);

    printf("Set PIN: ");
    scanf("%d", &a[count].pin);

    a[count].balance = 0;

    count++;

    printf("\nAccount Created Successfully!\n");
}

void displayAccounts()
{
    if(count == 0)
    {
        printf("\nNo Accounts Found!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("\nAccount No: %d", a[i].accNo);
        printf("\nName: %s", a[i].name);
        printf("\nBalance: %.2f\n", a[i].balance);
    }
}

void searchAccount()
{
    int acc;
    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    for(int i = 0; i < count; i++)
    {
        if(a[i].accNo == acc)
        {
            printf("\nAccount Found!");
            printf("\nName: %s", a[i].name);
            printf("\nBalance: %.2f\n", a[i].balance);
            return;
        }
    }

    printf("\nNot Found!\n");
}

void depositMoney()
{
    int acc;
    float amt;

    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    for(int i = 0; i < count; i++)
    {
        if(a[i].accNo == acc)
        {
            printf("Enter Amount: ");
            scanf("%f", &amt);

            a[i].balance += amt;

            printf("\nDeposited Successfully!\n");
            return;
        }
    }

    printf("\nAccount Not Found!\n");
}

void withdrawMoney()
{
    int acc;
    float amt;

    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    for(int i = 0; i < count; i++)
    {
        if(a[i].accNo == acc)
        {
            printf("Enter Amount: ");
            scanf("%f", &amt);

            if(amt <= a[i].balance)
            {
                a[i].balance -= amt;
                printf("\nWithdrawal Successful!\n");
            }
            else
            {
                printf("\nInsufficient Balance!\n");
            }
            return;
        }
    }

    printf("\nAccount Not Found!\n");
}
