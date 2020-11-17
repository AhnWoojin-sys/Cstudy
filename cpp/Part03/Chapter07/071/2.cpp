#include <iostream>
#include <cstring>

using namespace std;

class FriendInfo{
private:
    char *name;
    int age;
public:
    FriendInfo(const char* name, int age) : age(age){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    void ShowFriendInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
    ~FriendInfo(){
        delete []name;
    }
};

class FriendDetailInfo : public FriendInfo{
private:
    char *addr;
    char *phone;
public:
    FriendDetailInfo(const char* name, int age, const char* addr, const char* phone)
    : FriendInfo(name, age){
        this->addr = new char[strlen(addr)+1];
        this->phone= new char[strlen(phone)+1];
        strcpy(this->addr, addr);
        strcpy(this->phone, phone);
    }

    void ShowFriendDetailInfo(){
        ShowFriendInfo();
        cout<<"Address : "<<addr<<endl;
        cout<<"Phone number : "<<phone<<endl;
    }
    ~FriendDetailInfo(){
        delete []addr;
        delete []phone;
    }
};

int main(void){
    FriendDetailInfo woojin("woojin", 22, "Daejeon", "010-2277-7398");
    
    woojin.ShowFriendDetailInfo();

    return 0;
}