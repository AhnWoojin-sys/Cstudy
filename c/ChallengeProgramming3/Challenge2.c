#include <stdio.h>
#include <string.h>

void SpiralPrint(int num){
    int spiral[num][num];
    int col = 0, low = 0;
    int count = 1;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++)
            spiral[i][j] = 0;

    }
    while(1){
        while(low<num){
            spiral[col][low] = count;
            count++;
            low++;
        }
        
    }

    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++)
            printf("%3d", spiral[i][j]);
        puts(" ");
    }
}


int main(void){
    int num;
    printf("Input number : ");
    scanf("%d", &num);

    SpiralPrint(num);

    return 0;
}