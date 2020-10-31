#include <stdio.h>
#include <string.h>

struct employee{
    char name[20]; 
    char id[20];
    int salary;
};

int main(void){
    struct employee woojin;

    strcpy(woojin.name,"Woojin Ahn");
    strcpy(woojin.id,"990426-144****");
    woojin.salary = 2000000;
    
    printf("Name : %s \n", woojin.name);
    printf("Id : %s \n", woojin.id);
    printf("Salary : %d \n", woojin.salary);

    return 0;
}