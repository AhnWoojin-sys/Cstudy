#include <stdio.h>

int main(void){
    FILE *fp = fopen("data.txt", "rt");
    int ch;
    if(fp==NULL){
        puts("File open failed");
        return 0;
    }
    for(int i=0;i<3;i++){
        ch=fgetc(fp);
        printf("%3c",ch);
    }

    fclose(fp);

    return 0;
}