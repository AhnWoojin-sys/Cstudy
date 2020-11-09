#include <iostream>
#include "FruitSale.h"

using namespace std;

int FruitSeller::SaleApples(int m){
    if(m < 0)
        cout<<"You have to type positive number in money"<<endl;
    int num = m/APPLE_PRICE; 
    countApple -= num;
    money += m;
    return num;
}

// Print all members
void const FruitSeller::PrintSellerInfo(){
    cout<<"-------Apple seller information-------"<<endl;
    cout<<"Apple Price : "<<APPLE_PRICE<<endl;
    cout<<"Money : "<<money<<endl;
    cout<<"Number of apples: "<<countApple<<endl;
}



void FruitBuyer::BuyApples(FruitSeller &seller, int m){
    if(m < 0)
        cout<<"You have to type positive number in money"<<endl;
    money -= m;
    countApple += seller.SaleApples(m);
}

// Print all members
void const FruitBuyer::PrintBuyerInfo(){
    cout<<"-------Apple buyer information-------"<<endl;
    cout<<"Money : "<<money<<endl;
    cout<<"Number of apples: "<<countApple<<endl;
}

