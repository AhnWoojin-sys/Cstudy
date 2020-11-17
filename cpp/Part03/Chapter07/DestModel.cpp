#include <iostream>
#include <cstring>

using namespace std;

class Person{
private:
    char *name;
public:
    Person(const char* name){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    ~Person(){
        cout<<"Call Person distructor"<<endl;
        delete []name;
    }
    void ShowName(){
        cout<<"Name : "<<name<<endl;
    }
};

class UnivClass : public Person{
private:
    char *major;
public:
    UnivClass(const char* name,const char* major):Person(name){
        this->major=new char[strlen(major)+1];
        strcpy(this->major, major);
    }
    ~UnivClass(){
        cout<<"Call Univ distructor"<<endl;
        delete []major;
    }
    void ShowUnivInfo(){
        ShowName();
        cout<<"major : "<<major<<endl;
    }
};

int main(void){
    UnivClass woojin("Woojin", "Programming");
    woojin.ShowUnivInfo();

    return 0;
}