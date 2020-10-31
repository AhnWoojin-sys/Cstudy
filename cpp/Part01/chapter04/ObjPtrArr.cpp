#include <iostream>
#include<cstring>
using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char * myName, int myAge){
            int len = strlen(myName);
        }
        Person(){
            
        }
        void SetPersonInfo(char * myname, int myage){
            name = myname;
            age = myage;
        }
        void ShowPersonInfo(){
            
        }
};

int main(void){

}