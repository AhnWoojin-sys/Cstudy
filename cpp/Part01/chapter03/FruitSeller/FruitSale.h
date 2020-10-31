#ifndef __FRUITSALE_H_
#define __FRUITSALE_H_

class Seller{
    private:
        int APPLE_PRICE;
        int myMoney;
        int numberOfApples;

    public:
        bool InitMembers(int price, int money, int numberOfApples);
        int SaleApples(int money);
        void ShowSellerInfo() const;

};

class Buyer{
    private:
        int myMoney;
        int numberOfApples;

    public:
        bool InitMembers(int money);
        void buyApples(Seller *seller, int money);
        void ShowBuyerInfo() const;
};

#endif