#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * ReadUserName(void){
    char *name = (char *)malloc(sizeof(char)*30);
    puts("what is your name?");
    gets(name);
    return name;
}

int main(void){
    char* name1;
    char* name2;

    name1 = ReadUserName();
    name2 = ReadUserName();

    puts(name1);
    puts(name2);

    free(name1);
    free(name2);
    return 0;
}