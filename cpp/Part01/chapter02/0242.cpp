#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void){
    int num[5];

    srand(time(NULL));

    for(int i=0;i<5;i++){
        num[i] = rand() % 100;
    }

    for(int i=0;i<5;i++){
        cout<<num[i]<<endl;
    }

    return 0;
}