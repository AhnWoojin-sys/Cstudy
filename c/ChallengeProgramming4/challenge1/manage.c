#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "manage.h"


void input_struct(BookInfo *book){
    fputs("Author : ", stdout);
    gets(book->author);
    fputs("Name : ", stdout);
    gets(book->name);
    fputs("Page : ", stdout);
    scanf("%d", &book->page);
}

void print_struct_members(BookInfo book){
    printf("Author : %s\n", book.author);
    printf("Name : %s\n", book.name);
    printf("Page : %d\n", book.page);
    puts("");
}