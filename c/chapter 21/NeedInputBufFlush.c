#include <stdio.h>

int main(void){
    char perID[7];
    char name[10];

    fputs("Type your first id : ", stdout);
    fgets(perID, sizeof(perID), stdin);
    for(int i=0;i<sizeof(perID);i++){
        putchar(perID[i]);
    }
    fflush(stdin);
    fputs("Type your name : ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("Your ID Number :  %s\n", perID);
    printf("Your name : %s", name);

    return 0;
}