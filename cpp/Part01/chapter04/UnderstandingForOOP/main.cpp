#include "FruitSale.h"

int main(void){
    FruitBuyer buyer(10000, 0);
    FruitSeller seller(1000, 50000, 50);
    FruitBuyer buy(-100, 0);

    seller.PrintSellerInfo();
    buyer.PrintBuyerInfo();

    buyer.BuyApples(seller, 5000);

    cout<<endl;
    cout<<"---------------- After to sale ----------------"<<endl;
    cout<<endl;
    seller.PrintSellerInfo();
    buyer.PrintBuyerInfo();

    return 0;
}