#include <iostream>

using namespace std;

class BaseNum{
private:
    int baseNum;
public:
    BaseNum(int n) : baseNum(n){
        cout<<"BaseNum() : "<<baseNum<<endl;
    }
    ~BaseNum(){
        cout<<"~BaseNum() : "<<baseNum<<endl;
    }
};

class DeriveNum : public BaseNum{
private:
    int driveNum;
public:
    DeriveNum(int n) : BaseNum(n), driveNum(n){
        cout<<"DeriveNum() : "<<driveNum<<endl;
    }
    ~DeriveNum(){
        cout<<"~DeriveNum() : "<<driveNum<<endl;
    }
};

int main(void){
    DeriveNum drv1(15);
    DeriveNum drv2(20);

    return 0;
}