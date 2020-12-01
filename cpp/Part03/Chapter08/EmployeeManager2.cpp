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

// 고용주
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
    void ShowNameInfo() const{
        cout<<"name : "<<name<<endl;
    }
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
    int GetPay()const{
        return salary;
    }
    void ShowSalaryInfo() const{
        ShowNameInfo();
        cout<<"Salary : "<<salary<<endl;
        cout<<""<<endl;
    }
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
    int GetPay() const{
        return workTime*payPerHour;
    }
    void AddWorkTime(int time){
     workTime = time;   
    }
    void ShowSalaryInfo() const{
        ShowNameInfo();
        cout<<"Salary : "<<GetPay()<<endl;
        cout<<""<<endl;
    }
};
// 비정규직 + 영업직`
class SalesWorker : public PermanentWorker{
private:
    int salesResult;
    double bounsRadio;
public:
    SalesWorker(const char *name, int salary, double radio)
    :PermanentWorker(name, salary), salesResult(0), bounsRadio(radio){
        //empty
    }
    virtual void AddSalesResult(int value){
        salesResult = value;
    }
    int GetPay() const{
        return PermanentWorker::GetPay()+(int)(salesResult*bounsRadio);
    }
    void ShowSalaryInfo() const{
        ShowNameInfo();
        cout<<"Salary : "<<GetPay()<<endl<<endl;
    }
};

// 비정규직 + 영업직 + 외국파견
class ForeignSalesWorker: public SalesWorker{
private:
    int salesResult;
    int risktype;
    double bounsRadio;
public:
    ForeignSalesWorker(const char *name, int salary, double radio, int risk)
    :SalesWorker(name, salary, radio), risktype(risk), bounsRadio(0){
    }
    void AddSalesResult(int value){
        switch(risktype){
            case RISK_LEVEL::RISK_A:
                bounsRadio = 1.3;
                break;
            case RISK_LEVEL::RISK_B:
                bounsRadio = 1.2;
                break;
            case RISK_LEVEL::RISK_C:
                bounsRadio = 1.1;
                break;
        };
        salesResult = bounsRadio*value;
    }
    int GetPay() const{
        return 0;
    }
};
// 고용 핸들러
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

int main(void){
    EmployeeHandler handler;

    // Added Permanent Worker 
    handler.AddEmployee(new PermanentWorker("Woojin", 100000));
    handler.AddEmployee(new PermanentWorker("JongHyuk", 5000000));

    // Added Temporary Worker 
    TemporaryWorker *alba = new TemporaryWorker("GyungHyun", 10000);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);

    // Added Sales Worker
    SalesWorker *seller = new SalesWorker("JaeGyung", 5000, 0.5);
    seller->AddSalesResult(10);
    handler.AddEmployee(seller);

    ForeignSalesWorker *Dseller = 
    new ForeignSalesWorker("JongH", 10000, 0.5, RISK_LEVEL::RISK_A);
    handler.AddEmployee(Dseller);

    // All Salary Information for this month
    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();

    return 0;
}