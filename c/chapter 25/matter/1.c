#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * input_string(int len){
    char * str = (char *)malloc(sizeof(char)*len);
    fputs("Input your string : ", stdout);
    fgets(str, len+1, stdin);
    return str;
}



int main(void){
    int maxlen;
    char * str;
    fputs("Input your max len : ", stdout);
    scanf("%d", &maxlen);
    char * str = (char *)malloc(sizeof(char)*maxlen);
    str = input_string(maxlen);

    free(str);

    return 0;
}