#include <stdio.h>
void Print2DArr(int arr[][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int arr[5][5];
    int count = 1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = count;
            count++;
        }
    }
    Print2DArr(arr);

    return 0;
}