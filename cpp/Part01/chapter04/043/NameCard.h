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
        NameCard(const char* myname,const char* mycompany,const char* myphoneNumber, int mycompanyRank){
            int nameLen = strlen(myname) + 1;
            int companyLen = strlen(mycompany) + 1;
            int phoneNumberLen = strlen(myphoneNumber) + 1;
            name = new char[nameLen];
            company = new char[companyLen];
            phoneNumber = new char[companyLen];
            strcpy(name, myname);
            strcpy(company, mycompany);
            strcpy(phoneNumber, myphoneNumber);
            companyRank = mycompanyRank; 
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