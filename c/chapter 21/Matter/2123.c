#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int age;
}user;

void compare_name(char *str1, char *str2){
    if(strcmp(str1, str2))
        printf("It is not equel name");
}

int main(void){
    user person1;
    user person2;

    fputs("Person1 name : ",stdout);
    gets(person1.name);
    fflush(stdin);
    fputs("Person1 age : ",stdout);
    scanf("%d", &person1.age);
    fflush(stdin);
    fputs("Person2 name : ",stdout);
    gets(person2.name);
    fputs("Person1 age : ",stdout);
    scanf("%d", &person1.age);
    compare_name(person1.name, person2.name);
    
    return 0;
}