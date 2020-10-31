#include <stdio.h>

int main(void){
    int arr1[2][2] = {{1, 2},
                      {3, 4}};
    int arr2[2][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8}};
    int arr3[5][5];
    int count = 0;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            count++;
            arr3[i][j] = count;
        }
    }
    
    int (*ptr1)[2] = arr1;
    int (*ptr2)[4] = arr2;
    int (*ptr3)[5] = arr3;

    printf("==== (*ptr1)[2] arr ====\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%3d",ptr1[i][j]);
        }
        printf("\n");
    }

    printf("==== (*ptr2)[4] arr ====\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%3d",ptr2[i][j]);
        }
        printf("\n");
    }

    printf("==== (*ptr3)[5] arr ====\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%3d",ptr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}