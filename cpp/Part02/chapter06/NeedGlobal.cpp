#include <iostream>
using namespace std;

int Obj1Cnt = 0;
int Obj2Cnt = 0;

class Object1{
public:
    Object1(){
        Obj1Cnt++;
        cout<<Obj1Cnt<<"bun jjae Object object"<<endl;
    }
};

class Object2{
public:
    Object2(){
        Obj2Cnt++;
        cout<<Obj2Cnt<<"bun jjae Object2 object"<<endl;
    }
    Object2(const Object2 &copy){
        Obj2Cnt++;
        cout<<Obj2Cnt<<"bun jjae Object2 object"<<endl;
    }
};

int main(void){
    Object1 obj1;
    Object1 obj2;

    Object2 com1;
    Object2 com2= com1;
    Object2();

    return 0;
}