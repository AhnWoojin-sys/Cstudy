#include <iostream>

using namespace std;

class BaseNum{
private:
    int baseNum;
public:
    BaseNum():baseNum(20){
        cout<<"BaseNum()"<<endl;
    }
    BaseNum(int num):baseNum(num){
        cout<<"BaseNum(int num)"<<endl;
    }
    void ShowBaseNum(){
        cout<<"BaseNum num : "<<baseNum<<endl;
    }
};

class DeriveNum : public BaseNum{
private:
    int deriveNum;
public:
    DeriveNum()
    :deriveNum(30){
        cout<<"DeriveNum()"<<endl;
    }
    DeriveNum(int num) : deriveNum(num){
        cout<<"DeriveNum(int num)"<<endl;
    }
    DeriveNum(int num1, int num2) : BaseNum(num1), deriveNum(num2){
        cout<<"DeriveNum(int num1, int num2)"<<endl;
    }
    void ShowDeriveNum(){
        ShowBaseNum();
        cout<<"Derive num  "<<deriveNum<<endl;
    }
};

int main(void){
    cout<<"------------------ case1 ------------------"<<endl;
    DeriveNum dr1;
    dr1.ShowDeriveNum();
    cout<<"------------------ case2 ------------------"<<endl;
    DeriveNum dr2(12);
    dr2.ShowDeriveNum();
    cout<<"------------------ case3 ------------------"<<endl;
    DeriveNum dr3(12,23);
    dr3.ShowDeriveNum();

    return 0;
}