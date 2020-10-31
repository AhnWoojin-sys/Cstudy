#include <stdio.h>

void StoreArr(int arr[], int size){
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
}

void ArrMethodChange(int arr[], int arr2[], int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if((arr[i] % 2) == 1){
            arr2[count] = arr[i];
            count++;
        }
    }

    count = 9;

    for(int i=0;i<size;i++){
        if((arr[i] % 2) == 0){
            arr2[count] = arr[i];
            count--;
        }
    }
}

// Output Arr
void ShowArr(int arr[], int size){
    for(int i=0;i<size;i++){
            printf("%3d", arr[i]);
        }
}
int main(void){
    int arr[10];
    int arr2[10];
    printf("Enter Total term 10 numbers\n");
    StoreArr(arr, sizeof(arr)/sizeof(int));
    
    ArrMethodChange(arr, arr2, sizeof(arr)/sizeof(int));

    printf("Output Array");
    ShowArr(arr2, sizeof(arr2)/sizeof(int));

    return 0;
}