#include <iostream>

using namespace std;

class Class{
private:
    int num1;
    int num2;
public:
    Class(int n1, int n2)
    : num1(n1), num2(n2){
        //empty
    }
    Class(const Class &copy)
    : num1(copy.num1), num2(copy.num2){
        cout<<"Called Class(Class &copy)"<<endl;
    }
    void ShowSimpleData(){
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};

int main(void){
    Class obj1(10, 20);
    Class obj2(obj1);

    obj1.ShowSimpleData();
    obj2.ShowSimpleData();

    return 0;
}