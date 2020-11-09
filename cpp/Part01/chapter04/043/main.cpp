#include <iostream>
#include "NameCard.h"

int main(void){
    NameCard woojin("Woojin", "Standardenergy", "010-2277-7398", COMPANY_RANK::SENIOR);
    NameCard jonghyuk("jonghyuk", "Standardenergy", "010-2277-7398", COMPANY_RANK::SENIOR);
    NameCard jaegyong("jaegyong", "ThreeShine", "010-1111-1111", COMPANY_RANK::ASSIST);
    woojin.ShowNameCardInfo();
    jonghyuk.ShowNameCardInfo();
    jaegyong.ShowNameCardInfo();

    return 0;
}