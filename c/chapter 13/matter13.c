#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr+4;

    printf("%d", *ptr);

    return 0;
}