#include <iostream>
#include <cstring>

using namespace std;

class Employee{
private:
    char *name;
public:
    Employee(const char *name){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    Employee(const Employee &copy){
        this->name = new char[strlen(copy.name)+1];
        strcpy(this->name, copy.name);
    }
    ~Employee(){
        delete []name;
    }
    void ShowEmployeeInfo() const{
        cout<<"name"<<name<<endl;
    }
};

class PermanentWorker : public Employee{
private:
    int salary;
public:
    PermanentWorker(const char *name, int salary)
    :Employee(name), salary(salary){
        //empty
    }
    int GetPay()const{
        return salary;
    }
    void ShowPermanentWorkerInfo() const{
        ShowEmployeeInfo();
        cout<<"Salary"<<salary<<endl;
    }
};

class TemporaryWorker : public Employee{
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(char *name, int pay)
    :Employee(name), workTime(0), payPerHour(pay){
        //empty
    }
    int GetPay() const{
        return workTime*payPerHour;
    }
    void ShowSalaryInfo() const{
        ShowEmployeeInfo();
        cout<<"Salary"<<GetPay()<<endl;
    }
};

class SalesWorker : public PermanentWorker{
private:
    int salesResult;
    double bounsRadio;
public:
    SalesWorker(char *name, int salary, double radio)
    :PermanentWorker(name, salary), salesResult(0), bounsRadio(radio){
        //empty
    }

};

class EmployeeHandler {
private:
    Employee *empList[50];
    int empNum;
public:
    EmployeeHandler():empNum(0){
        // empty
    }
    void AddEmployee(Employee* emp){
        empList[empNum++] = emp;
    }
    ~EmployeeHandler(){
        for(int i=0;i<empNum;i++){
            delete empList[i];
        }
    }

};


int main(void){

    return 0;
}