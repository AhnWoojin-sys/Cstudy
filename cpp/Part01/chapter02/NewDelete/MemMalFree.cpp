#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

char * MakeStrAdr(int len){
    char * str=(char *)malloc(sizeof(char)*len);
    return str;
}

int main(void){
    char *str = MakeStrAdr(20);
    strcpy(str, "Hello World!");
    cout<<str<<endl;

    free(str);

    return 0;
}