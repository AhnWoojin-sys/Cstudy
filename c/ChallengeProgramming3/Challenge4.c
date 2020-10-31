#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int dice1, dice2;

    srand((int)time(NULL));
    dice1 = rand() % 6 + 1; 
    dice2 = rand() % 6 + 1;
    printf("dice 1 : %d , dice 2 : %d ", dice1, dice2);
    

    return 0;
}


