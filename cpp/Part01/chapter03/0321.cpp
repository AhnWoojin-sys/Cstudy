#include <iostream>

using namespace std;

class Calculator{
    private:
        int AddCount;
        int MinCount;
        int MulCount;
        int DivCount;
    public:
        void Init();
        int Add(double a, double b);
        int Min(double a, double b);
        int Mul(double a, double b);
        int Div(double a, double b);
        void ShowOpCount();
};

void Calculator::Init(){
    AddCount = 0;
    MinCount = 0;
    MulCount = 0;
    DivCount = 0;
}

int Calculator::Add(double a, double b){
    AddCount++;
    return a+b;
}
int Calculator::Min(double a, double b){
    MinCount++;
    return a-b;
}
int Calculator::Mul(double a, double b){
    MulCount++;
    return a*b;
}
int Calculator::Div(double a, double b){
    DivCount++;
    return a/b;
}

void Calculator::ShowOpCount(){
    cout<<"Add : "<<AddCount<<" Min : "<<MinCount<<" Mul : "<<MulCount<<" Div : "<<DivCount<<endl;;
}

int main(void){
    Calculator car;

    car.Init();
    cout<<"3.2 / 2.4 : "<<car.Div(3.2, 2.4)<<endl;
    cout<<"3.2 * 2.4 : "<<car.Mul(3.2, 2.4)<<endl;
    cout<<"3.2 - 2.4 : "<<car.Min(3.2, 2.4)<<endl;
    cout<<"3.2 + 2.4 : "<<car.Add(3.2, 2.4)<<endl;
    car.ShowOpCount();
}