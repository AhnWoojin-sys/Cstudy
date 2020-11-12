#include <iostream>
using namespace std;

class Object1{
private:
    static int Obj1Cnt;
public:
    Object1(){
        Obj1Cnt++;
        cout<<Obj1Cnt<<"bun jjae Object object"<<endl;
    }
};

int Object1::Obj1Cnt = 0;

class Object2{
private:
    static int Obj2Cnt;
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

int Object2::Obj2Cnt = 0;

int main(void){
    Object1 obj1;
    Object1 obj2;

    Object2 com1;
    Object2 com2= com1;
    Object2();

    return 0;
}