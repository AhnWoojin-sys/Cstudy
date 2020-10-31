#include <stdio.h>
void PrintArr(int *arr,int size){
    for(int i=0;i<3;i++){
        printf("Address in PrintArr : %p \n",arr+i);
    }
}

int main(void){
    int arr[3] = {1, 2, 3};

    PrintArr(arr,sizeof(int)*3);
    for(int i=0;i<3;i++){
        printf("Address in main: %p \n",arr+i);
    }
    return 0;
}