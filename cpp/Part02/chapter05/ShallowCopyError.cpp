#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char* name;
        int age;
    public:
        Person(const char* name, int age)
        :age(age){
            int len = strlen(name) + 1;
            this->name = new char[len];
            strcpy(this->name, name);
        }
        Person();
        void ShowPersonInfo()const{
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
        Person(Person const &copy)
        :age(copy.age){
            name = new char[strlen(copy.name)+1];
            strcpy(name, copy.name);
        }
        ~Person(){
            delete []name;
            cout<<"Called distructor"<<endl;
        }
};
using namespace std;

int main(void){
    Person woojin("woojin", 22);
    Person woojin2 = woojin;

    woojin.ShowPersonInfo();
    woojin2.ShowPersonInfo();

    return 0;
}