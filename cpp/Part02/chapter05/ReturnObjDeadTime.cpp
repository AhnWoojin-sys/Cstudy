#include <iostream>

using namespace std;

class Number{
private:
    int num;
public:
    Number(int n)
    :num(n){
        cout<<"New Object Pointer Address : "<<this<<endl;
    }
    Number(const Number &copy)
    :num(copy.num){
        cout<<"New Copy Object Pointer Address : "<<this<<endl;
    }
    ~Number(){
        cout<<"Delete Object Pointer Address : "<<this<<endl;
    }
};

Number NumberObject(Number ob){
    cout<<"Parm ADR: "<<&ob<<endl; 
    return ob;
}

int main(void){
    Number obj(10);
    NumberObject(obj);
    cout<<endl;
    Number tempRef = NumberObject(obj);
    cout<<"Return Obj : "<<&tempRef<<endl;

    return 0;
}