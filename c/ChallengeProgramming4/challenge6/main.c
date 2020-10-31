#include <stdio.h>
#include <string.h>
#include "manage.h"

int main(void){
    int purpose;
    int state = 1;

    puts("**** choose menu ****");
    puts("1. Insert");
    puts("2. Delete");
    puts("3. Search");
    puts("4. Print All");
    puts("5. Exit");
    task();

    return 0;
}