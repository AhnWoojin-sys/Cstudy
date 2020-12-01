#include <iostream>

namespace mystd{
    using namespace std;
    class ostream{
        public:
            void operator<<(const char * str){
                printf("%s", str);
            }
            void operator<<(char str){
                printf("%c", str);
            }
            void operator<<(int num){
                printf("%d", num);
            }
            void operator<<(double e){
                printf("%f", e);
            }
            void operator<<(ostream& (*fp)(ostream &ostm)){
                fp(*this);
            }
    };
    ostream& endl(ostream &ostm){
        ostm<<'\n';
        fflush(stdout);
        return ostm;
    }
    ostream cout;
}

int main(void){
    using std::cout;
    using std::endl;

    cout<<"Simple String"<<endl;
    cout<<3.14<<endl<<123<<endl;
    endl(cout);

    return 0;
}