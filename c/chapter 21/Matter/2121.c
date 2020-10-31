#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_and_convert_int(char * str, int len){
    int interval = '1' - 1;
    for(int i=0;i<len;i++){
        if(str[i] >= '0' && str[i] <= '9')
            printf("%3d", str[i] - interval);
    }
}

int main(void){
    char str[20];

    fputs("Type any string : ", stdout);
    gets(str);
    print_and_convert_int(str, strlen(str));

    return 0;
}