#include <iostream>
#include <cstring>

using namespace std;

class Gun{
private:
    int bullet;
public:
    Gun(int bullet = 0):bullet(bullet){ }
    void Shot(){
        if(bullet<=0){
            cout<<"Do not have bullet"<<endl;
            return;
        }
        bullet -= 1;
        cout<<"Bbang"<<endl;
    }
    void ShowState(){
        cout<<"bullet : "<<bullet<<endl;
    }
};


class Police : public Gun{
private:
    char* GunName;
    int megazine;
public:
    Police(int bullet, int megazine, const char* GunName)
    :Gun(bullet), megazine(megazine){
        this->GunName = new char[strlen(GunName)+1];
        strcpy(this->GunName, GunName);
    }

    Police(const Police& copy)
    :megazine(copy.megazine){
        this->GunName = new char[strlen(copy.GunName)+1];
        strcpy(this->GunName, copy.GunName);
    };

    ~Police(){
        delete []GunName;
    }
};

int main(void){

    
    return 0;
}