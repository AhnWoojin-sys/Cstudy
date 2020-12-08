#include <iostream>
#include <cstring>

using namespace std;

class Person{
private:
    char* name;
    int age;
public:
    Person(const char* name = "", int age = 0):age(age){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    ~Person(){
        delete []name;
        cout<<"Called distructor"<<endl;
    }
    void ShowPersonInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
    Person& operator=(const Person &ref){
        cout<<"Called operator="<<endl;
        delete []name;
        name = new char[strlen(ref.name)+1];
        strcpy(name, ref.name);
        age = ref.age;
        return *this;
    }
};


int main(void){
    Person won("jonghyuk won",21);
    Person woo("woojin ahn",22);
    Person cpywon;
    Person cpywoo;

    cpywon = won; //  == cpywon.operator=(won);
    cpywoo = woo;

    won.ShowPersonInfo();
    woo.ShowPersonInfo();
    cpywon.ShowPersonInfo();
    cpywoo.ShowPersonInfo();

    return 0;
}
