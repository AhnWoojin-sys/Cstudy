#include <iostream>

using namespace std;

class Number{
private:
    int num;
public:
    Number(int num)
    :num(num){
        cout<<"Call constructor"<<endl;
    }
    Number(Number &copy) : num(copy.num){
        cout<<"Call copy constructor"<<endl;
    }
    Number& AddNumber(int n){
        num+=n;
        return *this;
    }
    void ShowData(){
        cout<<"num: "<<num<<endl;
    }
};

Number NumberObj(Number ob){  // Call First copy constructor
    cout<<"Before return"<<endl;
    return ob; // Create Temporary object and Call second copy constructor
}

int main(void){
    Number obj(10); // Call constructor 
    // First            Second     Show 1 
    NumberObj(obj).AddNumber(10).ShowData();  //Call Called Number  
    obj.ShowData(); // Show 2
    return 0;
}