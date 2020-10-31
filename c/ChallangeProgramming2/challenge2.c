#include <stdio.h>
void ConvertBinary(int num){
    int arr[32];
    int count=0;

    while (num>0){
        arr[count] = num % 2;

        num = num/2;

        count++;
    }
    for(int i=count-1;i>=0;i--){
        printf("%d", arr[i]);
    }
}

int main(void){
    int num;

    printf("Input decima integer : ");
    scanf("%d", &num);
    ConvertBinary(num);
    
    return 0;
}