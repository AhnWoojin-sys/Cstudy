#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *fptr = arr;
    int *bptr = arr+5;
    
    for(int i=0;i<3;i++){
        swap(fptr+i, bptr-i);
    }

    for(int i=0;i<6;i++){
        printf("*(arr+%d) = %d\n", i, *(arr+i));
    }

    return 0;
}