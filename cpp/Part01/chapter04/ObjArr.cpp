#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(const char *n,const int num) : age(num){
            int nameLen = strlen(n) + 1;
            name = new char[nameLen];
            strcpy(name, n);
        }
        Person(){
            name = NULL;
            age = 0;
            cout<<"Called Person()"<<endl;
        }
        void SetPersonInfo(char *myname, int myage);
        void showPerson();
        ~Person(){
            delete []name;
            cout<<"Called distructor!"<<endl;
        }
};

void Person::SetPersonInfo(char *myname, int myage){
    name = myname;
    age = myage;
}

void Person::showPerson(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
}

int main(void){
    Person PersonArr[3];
    int age;
    int len;
    char namestr[100];
    char* name;

    for(int i=0;i<3;i++){
        cout<<"name : ";
        cin>>namestr;
        cout<<"age : ";
        cin>>age;
        len = strlen(namestr) + 1;
        name = new char[len];
        strcpy(name, namestr);
        PersonArr[i].SetPersonInfo(name, age);
    }

    for(int i=0;i<3;i++){
        PersonArr[i].showPerson();
    }
    delete []name;
    return 0;
}