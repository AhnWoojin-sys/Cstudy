#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "manage.h"

void task(){
    PersonInfo* person[100];
    for(int i=0;i<100;i++){
        person[i] = NULL;
    }
    int num = 0;
    int *ptrlen = &num;
    int state = 1;
    int purpose;

    while(state == 1){
        fputs("Choose the task : ",stdout);
        scanf("%d",&purpose);
        switch(purpose){
            case INSERT:
                insert_person(person, ptrlen);
                state = 1;
                break;
            case DELETE:
                delete_person(person, (sizeof(PersonInfo)*num)/sizeof(PersonInfo), ptrlen);
                state = 1;
                break;
            case SEARCH:
                print_search_person(person, (sizeof(PersonInfo)*num)/sizeof(PersonInfo));
                state = 1;
                break;
            case PRINTALL:
                print_all_struct(person, (sizeof(PersonInfo)*num)/sizeof(PersonInfo), num);
                state = 1;
                break;
            case EXIT:
                state = 0;
                puts("bye.");
                break;
        }
    }
    for(int i=0;i<num;i++){
        free(person[i]);
    }
}

void insert_person(PersonInfo **person, int *saveNum){
    static int num = 0;
    person[num] = (PersonInfo *)malloc(sizeof(PersonInfo));
    fputs("Input Name : ", stdout);
    getchar();
    gets(person[num]->name);
    fputs("Input Tel Number : ",stdout);
    gets(person[num]->tel);
    num++;
    *saveNum = num;
    puts("Data Inserted !!");
}

void delete_person(PersonInfo **person, int maxlen, int *saveNum){
    char searchName[30];
    PersonInfo *searchPerson = NULL;
    fputs("Input the name which you wanna delete for : ", stdout);
    getchar();
    gets(searchName);
    searchPerson = person_linear_search(person, maxlen, searchName);
    for(int i=0;i<maxlen;i++){
        if(!strcmp(person[i]->name, searchPerson->name)){
            free(person[i]);
            person[i] = NULL;
        }
    }
}

void print_search_person(PersonInfo **person, int maxlen){
    char searchName[30];
    PersonInfo *targetPerson = NULL;
    printf("%d", maxlen);
    fputs("Input the name which you wanna search for : ", stdout);
    getchar();
    gets(searchName);
    targetPerson = person_linear_search(person, maxlen, searchName);
    if(targetPerson!=NULL){
        printf("Name : %s\t Tel : %s \n",targetPerson->name, targetPerson->tel);
        return;
    }
    else{
        puts("Search Failed");
        return;
    }
}

// If input struct in this function, Print all PersonInfo struct
void print_all_struct(PersonInfo **person, int maxlen, int len){
    for(int i=0;i<len;i++){
        if(person[i] == NULL){
            continue;
        }

        printf("Name : %s Tel : %s \n",person[i]->name, person[i]->tel);
    }
}

//It is find targetName from PersonInfo struct array
//what value do i return in this function when failed to search
PersonInfo* person_linear_search(PersonInfo **person, int maxlen, char* targetName){
    for(int i=0;i<maxlen;i++){
        if(person[i] == NULL){
            puts("Search Failed");
            return NULL;
        }
        if(!strcmp(person[i]->name, targetName)){ //person[i]->name = *(person[i]).name?
            return person[i];
        }
    }
}
