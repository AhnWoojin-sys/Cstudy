#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;

    for(int i=0;i<5;i++){
        printf("Output random number : %d \n", rand() % 100);
    }

    return 0;
}