#include <stdio.h>
#include <string.h>

int ChangeArr(int arr[][4], int col, int row){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for(int i=0;i<4;i++){
        for(int j=3;j>=0;j--){
            printf("%3d", arr[j][i]);
        }
        printf("\n");
    }
    puts("");
    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
    for(int i=3;i>=0;i--){
        for(int j=0;j<col;j++){
            printf("%3d", arr[j][i]);
        }
        printf("\n");
    }
    
}

int main(void){
    int arr[4][4];
    int count = 1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = count;
            count++;
        }
    }

    ChangeArr(arr, sizeof(arr)/sizeof(arr[0]),sizeof(arr[0])/sizeof(arr[0][0]));

    return 0;
}