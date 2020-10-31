#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];
    int sum = 0;

    for(int i=0;i<5;i++){
        *(ptr-i) += 2;
    }

    for(int i=0;i<5;i++){
        printf("*(ptr+%d) = %d \n", i, *(ptr-i));
    }

    for(int i=0;i<5;i++){
        sum += *(ptr-i);
    }

    printf("Sum : %d", sum);

    return 0;
}