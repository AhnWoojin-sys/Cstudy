#include <iostream>

using namespace std;

class SimpleClass{
    private:
        int num1;
        int num2;
    public:
        SimpleClass();
        SimpleClass(int n1, int n2);
        void ShowMembers();
};

SimpleClass::SimpleClass(){
    num1 = 100;
    num2 = 200;
}

SimpleClass::SimpleClass(int n1, int n2){
    num1 = n1;
    num2 = n2;
}

void SimpleClass::ShowMembers(){
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
}

int main(void){
    SimpleClass simple;
    SimpleClass simple2(1000, 2000);

    simple.ShowMembers();
    simple2.ShowMembers();
    
    return 0;
}