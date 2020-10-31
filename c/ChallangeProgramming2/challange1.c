#include <stdio.h>

//Print Odd Function
void PrintOdd(int arr[], int len){
    printf("Output Odd number : ");
    for(int i=0;i<len;i++){
        if(arr[i] % 2 == 1)
            printf("%4d", arr[i]);
    }
    printf("\n");
}

//Print Even Function
void PrintEven(int arr[], int len){
    printf("Output Even number: ");
    for(int i=0;i<len;i++){
        if(arr[i] % 2 == 0)
            printf("%4d", arr[i]);
    }
}

int main(void){
    int arr[10];

    for(int i=0;i<10;i++){
        scanf("%d", arr+i);
    }

    PrintOdd(arr, sizeof(arr)/sizeof(int));
    PrintEven(arr, sizeof(arr)/sizeof(int));

    return 0;
}