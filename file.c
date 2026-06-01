#include <stdio.h>
#include "account.h"

extern Account a[];
extern int count;

void saveToFile()
{
    FILE *fp = fopen("data.dat", "wb");

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(a, sizeof(Account), count, fp);

    fclose(fp);
}

void loadFromFile()
{
    FILE *fp = fopen("data.dat", "rb");

    if(fp == NULL)
        return;

    fread(&count, sizeof(int), 1, fp);
    fread(a, sizeof(Account), count, fp);

    fclose(fp);
}
