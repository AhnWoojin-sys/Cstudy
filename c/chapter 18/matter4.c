#include <stdio.h>

int main(void){
    int arr[3][2]={
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("%d %d \n", arr[1][0], arr[0][1]);

    return 0;
}