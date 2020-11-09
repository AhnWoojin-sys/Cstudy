#include "NameCard.h" 

void NameCard::ShowNameCardInfo() const{
    cout<<"Name : "<<name<<endl;
    cout<<"company : "<<company<<endl;
    cout<<"phone number : "<<phoneNumber<<endl;
    cout<<"Rank : ";
    COMPANY_RANK::ShowRank(companyRank);
    cout<<""<<endl;
    cout<<""<<endl;
}

void COMPANY_RANK::ShowRank(const int rank){
        switch(rank){
            case COMPANY_RANK::CLERK:
                cout<<"CLERK";
                break;
            case COMPANY_RANK::SENIOR:
                cout<<"SENIOR";
                break;
            case COMPANY_RANK::ASSIST:
                cout<<"ASSIST";
                break;
            case COMPANY_RANK::MANAGER:
                cout<<"MANAGER";
                break;
            default:
                cout<<"Do not have Rank!";
                break;
        }
}