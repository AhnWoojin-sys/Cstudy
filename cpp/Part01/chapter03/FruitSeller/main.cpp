#include <iostream>
#include "FruitSale.h"
using namespace std;

int main(void){
    Seller seller;
    Buyer buyer;

    if(!seller.InitMembers(1000, 10000, 20)){
        cout<<"Initialize failed"<<endl;
        return -1;
    }
    buyer.InitMembers(5000);

    seller.ShowSellerInfo();
    buyer.ShowBuyerInfo();

    buyer.buyApples(&seller, 5000);
    seller.ShowSellerInfo();
    buyer.ShowBuyerInfo();

    return 0;
}