#include <iostream>
#include <cstring>

using namespace std;

class Person{ // 상위 클래스
private:
    char *name;
    int age;
public:
    Person(const char* name, const int age): age(age){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    void ShowPersonInfo() const {
        cout<<"name : "<<this->name<<endl;
        cout<<"age : "<<this->age<<endl;
    }
};

class UnivPerson : public Person{ // 하위 클래스
    private:
        char *majorSubject;
    public:
        UnivPerson(const char *name, const int age, const char *majorSubject)
        : Person(name, age){
            this->majorSubject = new char[strlen(majorSubject)+1];
            strcpy(this->majorSubject, majorSubject);
        }
        void WhoAreYou() const {
            ShowPersonInfo();
            cout<<"major : "<<this->majorSubject<<endl;
            cout<<""<<endl;
        }
};

int main(void){
    UnivPerson Woojin("Woojin", 22, "Programming");
    UnivPerson JongHyuk("JongHyuk", 21, "Drawing");

    Woojin.WhoAreYou();
    JongHyuk.WhoAreYou();

    return 0; 
}
