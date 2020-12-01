#include "employ.h"


// 고용인 함수
void Employee::ShowNameInfo() const{
    cout<<"name : "<<name<<endl;
}

// 정규직 클래스 함수
int PermanentWorker::GetPay() const{
    return salary;
}

void PermanentWorker::ShowSalaryInfo() const{
    ShowNameInfo();
    cout<<"Salary : "<<salary<<endl;
    cout<<""<<endl;
}


// 비정규직 클래스 함수
int TemporaryWorker::GetPay() const{
    return workTime*payPerHour;
} 

void TemporaryWorker::AddWorkTime(int time){
    workTime = time;
}

void TemporaryWorker::ShowSalaryInfo() const{
        ShowNameInfo();
        cout<<"Salary : "<<GetPay()<<endl;
        cout<<""<<endl;
}

// 정규직 + 영업직 함수

void SalesWorker::AddSalesResult(int value){
    salesResult = value;
}

int SalesWorker::GetPay() const{
    return PermanentWorker::GetPay()+(int)(salesResult*bounsRadio);
}

void SalesWorker::ShowSalaryInfo() const{
        ShowNameInfo();
        cout<<"Salary : "<<GetPay()<<endl;
        cout<<""<<endl;
}

// 정규직 + 영업직 + 외국파견

void ForeignSalesWorker::AddSalesResult(int value){
    SalesWorker::AddSalesResult(value);
    switch(risktype){
        case RISK_LEVEL::RISK_A:
            riskPay = GetPay()*0.3;
            break; 
        case RISK_LEVEL::RISK_B:
            riskPay = GetPay()*0.2;
            break;
        case RISK_LEVEL::RISK_C:
            riskPay = GetPay()*0.1;
            break;
        default:
            cout<<"Accese is denied"<<endl;
            return;
    }
}

void ForeignSalesWorker::ShowSalaryInfo() const{
    ShowNameInfo();
    cout<<"Salary : "<<SalesWorker::GetPay()<<endl;
    cout<<"risk pay : "<<riskPay<<endl;
    cout<<"sum : "<<GetPay()+riskPay<<endl;;
    cout<<""<<endl;
}