#ifndef __MANAGE_H__
#define __MANAGE_H__

enum{
    INSERT = 1,
    DELETE = 2,
    SEARCH = 3,
    PRINTALL = 4,
    EXIT = 5
};

typedef struct{
    char name[20];
    char tel[20];
}PersonInfo;

void task();
void insert_person(PersonInfo **person, int *saveNum);
void delete_person(PersonInfo **person, int maxlen, int *saveNum);
void print_search_person(PersonInfo **person, int maxlen);
void print_all_struct(PersonInfo **person, int maxlen, int len);
PersonInfo* person_linear_search(PersonInfo **person, int maxlen, char* targetName);
//How to get struct from function?

#endif