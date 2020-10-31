#include <stdio.h>

typedef struct{
    char name[20];
    char personID[20];
    char PhoneNumber[12];
}Person;

void get_person_info(Person *member1){
    fputs("Input name : ", stdout);
    gets(member1->name);
    fputs("Input member ID : ", stdout);
    gets(member1->personID);
    fputs("Input phone number : ", stdout);
    gets(member1->PhoneNumber);
}

void write_into_text(FILE *fp, Person member){
    fprintf(fp, "#Name: %s \n", member.name);
    fprintf(fp, "#Person ID: %s \n", member.personID);
    fprintf(fp, "#Phone Number: %s \n", member.PhoneNumber);
}

void output_write(FILE *fp){
    int ch;
    if(fp){
        while((ch = getc(fp))!=EOF){
            putchar(ch);
        }
    }
}

int main(void){
    FILE *fp = fopen("mystery.txt", "wt");
    if(fp==NULL){
        puts("File open failed");
        return -1;
    }
    Person person;
    printf("%p",fp);
    get_person_info(&person);
    write_into_text(fp, person);
    fclose(fp);
    FILE *frp = fopen("mystery.txt", "rt");
    output_write(frp);
    fclose(fp);
    return 0;
}