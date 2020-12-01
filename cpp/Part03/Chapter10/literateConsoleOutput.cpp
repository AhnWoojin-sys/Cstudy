#include <iostream>
namespace mystd{
    using namespace std;
    
    class ostream{
    public:
        ostream& operator<<(const char* str){
            printf("%s", str);
            return *this;
        }
        ostream& operator<<(char str){
            printf("%c", str);
            return *this;
        }
        ostream& operator<<(const char* str){
            printf("%s", str);
            return *this;
        }
        ostream& operator<<(const char* str){
            printf("%s", str);
            return *this;
        }
        ostream& operator<<(const char* str){
            printf("%s", str);
            return *this;
        }
    };
}

int main(void){
    return 0;
}