#ifndef __NAMECARD_H__
#define __NAMECARD_H__

#include <iostream>
#include <cstring>

using namespace std;

namespace COMPANY_RANK{
    enum{
        CLERK = 0,
        SENIOR,
        ASSIST,
        MANAGER
    };

    void ShowRank(int rank);
}

class NameCard{
    private:
        char* name;
        char* company;
        char* phoneNumber;
        int companyRank;
    public:
        NameCard(const char* name, const char* company, const char* phoneNumber, int companyRank)
        :companyRank(companyRank){
            this->name = new char[strlen(name)+1];
            this->company = new char[strlen(company)+1];
            this->phoneNumber = new char[strlen(phoneNumber)+1];
            strcpy(this->name, name);
            strcpy(this->company, company);
            strcpy(this->phoneNumber, phoneNumber);
        }
        NameCard(NameCard &copy)
        :companyRank(copy.companyRank){
            name = new char[strlen(copy.name)+1];
            company = new char[strlen(copy.company)+1];
            phoneNumber = new char[strlen(copy.phoneNumber)+1];
            strcpy(name, copy.name);
            strcpy(company, copy.company);
            strcpy(phoneNumber, copy.phoneNumber);
        }
        void ShowNameCardInfo() const;
        ~NameCard(){
            delete []name;
            delete []company;
            delete []phoneNumber;
            cout<<"Called distructor!"<<endl;
        }
};

#endif