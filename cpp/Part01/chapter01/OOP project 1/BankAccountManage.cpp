#include <iostream>
#include <cstring>
#include "BankAccountManage.h"

void task(void){
    ACCOUNT *customer[100];
    for(int i=0;i<100;i++){
        customer[i] == NULL;
    }
    char purpose = 0;
    int MaxIndex = 0;
    while(1){
        PrintManu();
        fputs("Select : ",stdout);
        scanf("%d", &purpose);
        if(purpose == 5)break;

        switch(purpose){
            case FEATURE_CONST::MAKEACCOUNT:
                MakeAccount(customer, &MaxIndex);
                break;
            case FEATURE_CONST::DEPOSIT:
                break;
            case FEATURE_CONST::WITHDRAW:
                break;
            case FEATURE_CONST::PRINTALLACCOUNT:
                break;
            case FEATURE_CONST::EXIT:
                break;       
        }
    if(purpose == 5)break;
    }
    delete []customer;
}

void PrintManu(void){
    puts("-------- Manu ---------");
    puts("|1. Open Account      |");
    puts("|2. deposit           |");
    puts("|3. withdraw          |");
    puts("|4. Print all acount  |");
    puts("|5. Exit              |");
    puts("-----------------------");
}


void MakeAccount(ACCOUNT *customer[], int *arrIndex){
    static int count = 0;
    customer[count] = new ACCOUNT;
    fputs("Account : ", stdout);
    scanf("%d", &customer[count]->accountID);
    fputs("Name : ", stdout);
    getchar();
    gets(customer[count]->customerName);
    fputs("Input Money : ", stdout);
    scanf("%d", &customer[count]->balance);

    count++;
    *arrIndex = count;
}

void PrintAccount(ACCOUNT *customer[], int index){
    for(int i=0;i<index;i++){
        printf("%s balance : %d", customer[i]->customerName, customer[i]->balance);
    };
}

void Deposit(){

}

void Withdraw(){

}

void PRINTALLCOUNT(){

}

ACCOUNT* LinearSearchAcountArray(ACCOUNT *arr[],int index, ACCOUNT target){
    for(int i=0;i<index;i++){
        if(arr[i]->accountID == target.accountID){
            return arr[i];
        }
        else{
            puts("Search Failed");
            return NULL;
        }
    }
}