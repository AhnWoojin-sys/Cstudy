#include <stdio.h>

int main(void){
    int arr[3] = {10, 15, 20};
    int *ptr = arr; //arr은 포인터 주소
    
    printf("ptr[0] = %d, arr[0] = %d\n", *ptr, *arr);
    printf("ptr[1] = %d, arr[1] = %d\n", *(ptr+1), *(arr+1));
    printf("ptr[2] = %d, arr[2] = %d\n", *(ptr+2), *(arr+1));

    return 0;
}