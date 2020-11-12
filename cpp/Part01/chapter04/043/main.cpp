#include <iostream>
#include "NameCard.h"

int main(void){
    NameCard woojin("Woojin", "Standardenergy", "010-2277-7398", COMPANY_RANK::SENIOR);
    NameCard jonghyuk("jonghyuk", "Standardenergy", "010-2277-7398", COMPANY_RANK::SENIOR);
    NameCard copy1=woojin;
    NameCard copy2=jonghyuk;

    woojin.ShowNameCardInfo();
    jonghyuk.ShowNameCardInfo();
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();

    while(1){
        char enter;
        cout<<"If you end this program Push the Enter"<<endl;
        cin>>enter;
        if(enter = 'A'){
            break;
        }
    }

    return 0;
}