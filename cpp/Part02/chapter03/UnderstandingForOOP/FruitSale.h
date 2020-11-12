#ifndef __FRUITSALE_H__ 
#define __FRUITSALE_H__ 

#include <iostream>

using namespace std;

class FruitSeller{
    private:
        int APPLE_PRICE;
        int money;
        int countApple;
    public:
        FruitSeller(int p, int m, int c);
        int SaleApples(int m);
        void PrintSellerInfo();
};

class FruitBuyer{
    private:
        int money;
        int countApple;
    public:
        FruitBuyer(int m, int c);
        void BuyApples(FruitSeller &seller, int m);
        void PrintBuyerInfo();
};

#endif