#include <iostream>
#include <cstring>

using namespace std;

class Computer{
private:
    char* owner;
public:
    Computer(const char* name){
        this->owner = new char[strlen(name)+1];
        strcpy(this->owner, name);
    }
    void Calculate(){
        cout<<"Start Calculater"<<endl;
    }
};

class Notebook : public Computer{
private:
    int Battery;
public:
    Notebook(const char* name, int InitCharging)
    : Computer(name), Battery(InitCharging){
        //Empty
    }
    void Charging() {Battery += 5;}
    void UseBattery() {Battery -= 5;}
    void MovingCal(){
        if(GetBatteryInfo()<1){
            cout<<"Please Charge"<<endl;
        }
        cout<<"When Moving";
        Calculate();
    }
    int GetBatteryInfo() const {
        
        return Battery;
    }
};

class TabletNotebook : public Notebook{
private:
    
public:
};

int main(void){

    return 0;
}
