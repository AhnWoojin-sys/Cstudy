#include "manage.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    BookInfo* book[100];
    int numberOfBook;
    fputs("How many book register do you want? : ",stdout);
    scanf("%d", &numberOfBook);

    for(int i=0;i<3;i++){
        book[numberOfBook] = (BookInfo *)malloc(sizeof(BookInfo));
    }

    for(int i=0;i<3;i++){
        input_struct(book[i]);
        print_struct_members(*(book[i]));
    }

    for(int i=0;i<3;i++){
        free(book[i]);
    }

    return 0;
}