#include <stdio.h>

int main(void){
    int num1 = 20;
    int *ptr1 = &num1;
    *ptr1 = 30;
    printf("%d", num1);

    return 0;
}