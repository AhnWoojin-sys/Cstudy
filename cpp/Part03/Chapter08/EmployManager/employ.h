#ifndef __EMPLOY_H__
#define __EMPLOY_H__

#include <iostream>
#include <cstring>

using namespace std;

namespace RISK_LEVEL{
    enum{
        RISK_A = 0,
        RISK_B,
        RISK_C,
    };
}

class Employee{
private:
    char *name;
public:
    Employee(const char* name){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    ~Employee(){
        delete []name;
    }
    void ShowNameInfo() const;
    virtual int GetPay() const = 0;
    virtual void ShowSalaryInfo() const = 0;
};

// 정규직
class PermanentWorker : public Employee{
private:
    int salary;
public:
    PermanentWorker(const char *name, int salary)
    :Employee(name), salary(salary){
        //empty
    }
    int GetPay()const;
    void ShowSalaryInfo() const;
};

// 비정규직
class TemporaryWorker : public Employee{
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(const char *name, int pay)
    :Employee(name), workTime(0), payPerHour(pay){
        //empty
    }
    int GetPay() const;
    void AddWorkTime(int time);
    void ShowSalaryInfo() const;
};

// 정규직 + 영업직
class SalesWorker : public PermanentWorker{
private:
    int salesResult;
    double bounsRadio;
public:
    SalesWorker(const char *name, int salary, double radio)
    :PermanentWorker(name, salary), salesResult(0), bounsRadio(radio){
        //empty
    }
    virtual void AddSalesResult(int value);
    int GetPay() const;
    void ShowSalaryInfo() const;
};

// 정규직 + 영업직 + 외국파견
class ForeignSalesWorker: public SalesWorker{
private:
    int salesResult;
    int risktype;
    int riskPay;
public:
    ForeignSalesWorker(const char *name, int salary, double radio, int risk)
    :SalesWorker(name, salary, radio), risktype(risk), riskPay(0){
    }
    void AddSalesResult(int value);
    void ShowSalaryInfo() const;
};

class EmployeeHandler {
private:
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler():empNum(0){
        // empty
    }
    void AddEmployee(Employee* emp){
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const{
        for(int i=0;i<empNum;i++){
            empList[i]->ShowSalaryInfo();   
            
        }
    }
    void ShowTotalSalary() const{
        int sum=0;
        for(int i=0;i<empNum;i++)
            sum+=empList[i]->GetPay();
        cout<<"Total : "<<sum<<endl;
    }
    ~EmployeeHandler(){
        for(int i=0;i<empNum;i++){
            delete empList[i];
        }
    }
};


#endif