#include <stdio.h>
#include <string.h>

void Remove_BSN(char str[]){
    int len = strlen(str);
    str[len-1] = 0;
}

int main(void){
    char str[100];
    printf("Input String : ");
    fgets(str, sizeof(str), stdin);
    printf("length : %d, text : %s \n", strlen(str), str);
    Remove_BSN(str);
    printf("length : %d, text : %s \n", strlen(str), str);
    printf("length : %d, text : %s \n", strlen(str), str);

    return 0;
}