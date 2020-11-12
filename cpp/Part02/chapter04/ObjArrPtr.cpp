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
        void ShowPerson();
        ~Person(){
            delete []name;
            cout<<"Called distructor!"<<endl;
        }
};

void Person::SetPersonInfo(char *myname, int myage){
    name = myname;
    age = myage;
} 

void Person::ShowPerson(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
}



int main(void){
    Person *parr[3];
    char namestr[100];
    int age;

    for(int i=0; i<3; i++){
        cout<<"name : ";
        cin>>namestr;
        cout<<"age : ";
        cin>>age;
        parr[i] = new Person(namestr, age);
    }

    for(int i=0; i<3; i++){
        parr[i]->ShowPerson();
        delete parr[i];
    }
    return 0;
}