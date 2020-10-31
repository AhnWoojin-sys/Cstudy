#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr[5];
    int **dptr = ptr;
    for(int i=0;i<5;i++){
        ptr[i] = &arr[i];
    }
    printf("Ptr Arr : ");
    for(int i=0;i<5;i++){
        printf("%--2d", *ptr[i]);
    }
    printf("\n");
    printf("dptr Arr : ");
    for(int i=0;i<5;i++){
        printf("%--2d", *dptr[i]);
    }

    return 0;
}