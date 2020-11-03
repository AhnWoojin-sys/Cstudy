#include <iostream>
#include "FruitSale.h"

using namespace std;
// initalize FruitSeller object
FruitSeller::FruitSeller(int p, int m, int c){
    APPLE_PRICE = p;
    money = m;
    countApple= c;
}

int FruitSeller::SaleApples(int m){
    int num = m/APPLE_PRICE; 
    countApple -= num;
    money += m;
    return num;
}

// Print all members
void FruitSeller::PrintSellerInfo(){
    cout<<"-------Apple seller information-------"<<endl;
    cout<<"Apple Price : "<<APPLE_PRICE<<endl;
    cout<<"Money : "<<money<<endl;
    cout<<"Number of apples: "<<countApple<<endl;
}

// initalize FruitBuyer object
FruitBuyer::FruitBuyer(int m, int c){
    money = m;
    countApple= c;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int m){
    money -= m;
    countApple += seller.SaleApples(m);
}

// Print all members
void FruitBuyer::PrintBuyerInfo(){
    cout<<"-------Apple buyer information-------"<<endl;
    cout<<"Money : "<<money<<endl;
    cout<<"Number of apples: "<<countApple<<endl;
}

