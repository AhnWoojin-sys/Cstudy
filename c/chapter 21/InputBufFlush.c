#include <stdio.h>
// Clear read buffer
void clear_line_from_read_buffer(void){
    while(getchar()!='\n');
}

int main(void){
    char perID[7];
    char name[10];
    
    fputs("Type your id : ",stdout);
    fgets(perID,sizeof(perID), stdin);
    clear_line_from_read_buffer();

    fputs("Type your name : ",stdout);
    fgets(name,sizeof(name), stdin);

    puts(perID);
    puts(name);

    return 0;
}