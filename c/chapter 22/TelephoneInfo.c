#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void){
    struct person man1, man2;
    strcpy(man1.name, "Woojin Ahn");
    strcpy(man1.phoneNum, "010-2277-7398");
    man1.age = 20;

    printf("Name : %s \n",man1.name);
    printf("PhoneNum : %s \n",man1.phoneNum);
    printf("age :%d \n",man1.age);

    return 0;
}
