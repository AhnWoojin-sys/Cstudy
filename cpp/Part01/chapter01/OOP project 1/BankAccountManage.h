#ifndef __BankAccoundManage_H__
#define __BankAccoundManage_H__

namespace FEATURE_CONST{
    enum{
        MAKEACCOUNT = 1,
        DEPOSIT,
        WITHDRAW,
        PRINTALLACCOUNT,
        EXIT
    };
}

struct ACCOUNT{
    int accountID;
    int balance;
    char customerName[20];
};

void task(void);
void PrintManu(void);

void MakeAccount(ACCOUNT *customer[], int *arrIndex);
void PrintAccount();

ACCOUNT* LinearSearchAcountArray(ACCOUNT *arr[],int index, ACCOUNT target){

#endif