#include <iostream>
#include <cstring>

using namespace std;
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
    void ShowYourName() const{
        cout<<"name : "<<name<<endl;

    }
    virtual void ShowSalaryInfo() const{
        //empty
    }
};

class PermanentWorker : public Employee{
private:
    int salary;
public:
    PermanentWorker(const char* name, int salary): Employee(name), salary(salary){
        //empty
    }
    int GetPay() const{
        return salary;
    }
    void ShowSalaryInfo() const{
        ShowYourName();
        cout<<"Salary : "<<GetPay()<<endl;
    }
};

class EmployeeHandler{
private:
    Employee *empList[50];
    int empNum;
public:
    EmployeeHandler():empNum(0){
        
    }
    void AddEmployee(Employee* emp){
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo(){
        for(int i=0;i<empNum;i++){
            empList[i]->ShowSalaryInfo();
        }
    }
};

int main(void){
    EmployeeHandler Handler;
    
    Handler.AddEmployee(new PermanentWorker("woojin Ahn", 5000000));

    Handler.ShowAllSalaryInfo();
}