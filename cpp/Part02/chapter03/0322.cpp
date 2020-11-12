#include <iostream>
#include <cstring>

using namespace std;

class Printer{
    private:
        char str[20];
    public:
        void Init(const char *source);
        void PrintStr();

};

void Printer::Init(const char *source){
    strcpy(str, source);
}

void Printer::PrintStr(void){
    cout<<str<<endl;
}

int main(void){
    Printer pnt;
    
    pnt.Init("Hello World!");
    pnt.PrintStr();

    pnt.Init("I love C++");
    pnt.PrintStr();

    return 0;
}