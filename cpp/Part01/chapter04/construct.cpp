#include <iostream>
using namespace std;

class SimpleClass{
    private:
        int num1;
        int num2;
    public:
        SimpleClass(int n1, int n2);
        void ShowData();
};

SimpleClass::SimpleClass(int n1, int n2){
    num1 = n1;
    num2 = n2;
}

void SimpleClass::ShowData(){
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
}

int main(void){
    SimpleClass sc1(10, 20);
    sc1.ShowData();
    
    return 0;
}