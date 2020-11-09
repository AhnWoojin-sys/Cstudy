#ifndef __FRUITSALE_H__ 
#define __FRUITSALE_H__ 

#include <iostream>

using namespace std;

class FruitSeller{
    private:
        const int APPLE_PRICE;
        int money;
        int countApple;
    public:
        FruitSeller(int p, int m, int c)
            : APPLE_PRICE(p), money(m), countApple(50){
                if(m<0)cout<<"Do not exist"<<endl;
            }
        int SaleApples(int m);
        void const PrintSellerInfo();
};

class FruitBuyer{
    private:
        int money;
        int countApple;
    public:
        FruitBuyer(int m, int c)
            : money(m), countApple(0){
                if(m<0)cout<<"Do not exist"<<endl;
            }
        void BuyApples(FruitSeller &seller, int m);
        void const PrintBuyerInfo();
};

#endif