#include <iostream>

using namespace std;

class Temporary{
private:
    int num;
public:
    Temporary(int num)
    :num(num){
        cout<<"create obj : "<<num<<endl;
    }
    ~Temporary(){
        cout<<"delete obj : "<<num<<endl;
    }
    Temporary(Temporary &copy)
    :num(copy.num){
        cout<<"Called copy constructor"<<endl;
    }
    void ShowTempInfo(){
        cout<<"num : "<<num<<endl;
    }
};

int main(void){
    Temporary(100); // Create Temporary and Return Reference Value
    cout<<"------------------------- Create Object -------------------------"<<endl;
    Temporary(100).ShowTempInfo(); //
    cout<<"------------------------- Create Object -------------------------"<<endl;
    const Temporary &ref = Temporary(100);
    cout<<"------------------------- Create Object -------------------------"<<endl;
    return 0;
}