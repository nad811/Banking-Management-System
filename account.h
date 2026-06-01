#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct
{
    int accNo;
    char name[50];
    float balance;
    int pin;
} Account;

void createAccount();
void displayAccounts();
void searchAccount();
void depositMoney();
void withdrawMoney();

#endif
