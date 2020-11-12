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
    Number& AddNum(int n){
        num+=n;
        return *this;
    }
    void ShowData() const{
        cout<<"num: "<<num<<endl;
    }
};

int main(void){
    const Number obj(7);

    //obj.Addnum(20);
    obj.ShowData();

    return 0;
}