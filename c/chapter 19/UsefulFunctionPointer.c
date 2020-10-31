#include <stdio.h>

int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2)){
    return cmp(age1, age2);
}

int OlderFirst(int age1, int age2){
    if(age1>age2)
        return age1;
    else if(age1<age2)
        return age2;
    else
        return 0;
}

int YoungerFirst(int age1, int age2){
    if(age1<age2)
        return age1;
    else if(age1>age2)
        return age2;
    else
        return 0;
}

int main(void){
    int age1 = 20;
    int age2 = 25;
    int first;

    printf("Enter 1 \n");
    first = WhoIsFirst(age1, age2, OlderFirst);
    printf("First Enter : %d, between %d, %d\n", age1, age2, first);

    printf("Enter 2 \n");
    first = WhoIsFirst(age1, age2, YoungerFirst);
    printf("First Enter : %d, between %d, %d\n", age1, age2, first);

    return 0;
}