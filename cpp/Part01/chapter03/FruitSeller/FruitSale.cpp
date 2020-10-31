#include <iostream>
#include "FruitSale.h"

using namespace std;

bool Seller::InitMembers(int price, int money, int apples){
    APPLE_PRICE = price;
    myMoney = money;
    numberOfApples = apples;
    if(numberOfApples < 0) return -1;
}

int Seller::SaleApples(int money){
    if(money < 0){
        cout<<"?"<<endl;
        return;
    }
    int num = money/APPLE_PRICE;
    numberOfApples -= num;
    myMoney += money;
    return num;
}

void Seller::ShowSellerInfo() const {
    cout<<"------- Seller Information ------"<<endl;
    cout<<"My money : "<<myMoney<<endl;
    cout<<"My apples : "<<numberOfApples<<endl;
}

bool Buyer::InitMembers(int money){
    myMoney = money;
    numberOfApples = 0;
}

void Buyer::buyApples(Seller *seller, int money){
    numberOfApples += seller->SaleApples(money);
    myMoney -= money;
}

void Buyer::ShowBuyerInfo() const{
    cout<<"------- Buyer Information ------"<<endl;
    cout<<"My money : "<<myMoney<<endl;
    cout<<"My apples: "<<numberOfApples<<endl;
}