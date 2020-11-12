#include <iostream>
using namespace std;

class Number{
private:
    int num;
public:
    Number(int num)
    :num(num){
        //empty
    }
    Number(Number &copy)
    :num(copy.num){
        cout<<"Called copy constructor"<<endl;
        //empty
    }
    void ShowNum(){
        cout<<"num : "<<num<<endl;
    }
};

void NumberFunction(Number ob){
    ob.ShowNum();
}

int main(void){
    Number n1(10);
    
    NumberFunction(n1);

    return 0;
}