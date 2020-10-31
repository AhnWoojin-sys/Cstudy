#ifndef _MANAGE__H__
#define _MANAGE__H__

typedef struct{
    char author[10];
    char name[20];
    int page;
}BookInfo;

void input_struct(BookInfo *book);
void print_struct_members(BookInfo book);

#endif

