#include <stdio.h>
void MaxAndMin(int arr[], int **maxP, int **minP, int size){

    for(int i=0;i<size;i++){
        if(arr[i] > **maxP){
            *maxP = &arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i] < **minP){
            *minP = &arr[i];
        }
    }
}

int main(void){
    int arr[5] = {2, 1, 30, 50, 20};
    int *maxPtr = &arr[0];
    int *minPtr = &arr[0];
    MaxAndMin(arr, &maxPtr, &minPtr, sizeof(arr)/sizeof(int));
    printf("*maxPtr : %d , *minPtr : %d\n", *maxPtr, *minPtr);
    printf("maxptr : %p, &arr[3] = %p",maxPtr, &arr[3]);

    return 0;
}