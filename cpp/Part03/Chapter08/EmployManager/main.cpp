#include "employ.h"

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
    seller->AddSalesResult(10000);
    handler.AddEmployee(seller);

    ForeignSalesWorker *Dseller = 
    new ForeignSalesWorker("JongH", 1000, 0.1, RISK_LEVEL::RISK_A);
    Dseller->AddSalesResult(7000);
    handler.AddEmployee(Dseller);

    // All Salary Information for this month
    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();

    return 0;
}