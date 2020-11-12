#include <iostream>
#include <cstring>

using namespace std;

class Number{
    private:
        int num;
    public:
        Number(int n) : num(n){
            cout<<"num : "<<num<<endl;
            cout<<"Address : "<<this<<endl;
        }
        void showData() const {
            cout<<num<<endl;
        }
        Number* GetThisPointer(){
            return this;
        }
};

int main(void){
    Number num(100);
    Number *ptr = num.GetThisPointer();
    cout<<ptr<<",";
    ptr->showData();
    
    cout<<""<<endl;

    Number num2(200);
    Number *ptr2 = num2.GetThisPointer();
    cout<<ptr2<<",";
    ptr2->showData();

    return 0;
}