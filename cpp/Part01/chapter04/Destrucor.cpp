#include <iostream>
#include <cstring>
using namespace std;

class Person{
    private:
        char * name;
        int age;
    public:
        Person(char *myname, int myage){
            int len = strlen(myname)+1;
            name = new char[len];
            cout<<name<<endl;
            strcpy(name, myname);
            age = myage;
        }
        void ShowPersonInfo()const{
            cout<<"Name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"called distructors!"<<endl;
        }
};

int main(void){
    Person man1("Woojin Ahn", 22);
    Person man2("JongHyuk Won", 21);

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}