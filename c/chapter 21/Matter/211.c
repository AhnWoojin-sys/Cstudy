#include <stdio.h>
int convert_alphabet(int ch){
    int interval = 'a' - 'A';
    if(ch>= 'a' && ch <= 'z')
        return ch-interval;
    else if(ch>= 'A' && ch <= 'Z')
        return ch+interval;
    else return 1;
}

int main(void){
    int ch,ch2, convertch;
    
    while(1){
        ch = getchar();
        convertch = convert_alphabet(ch);
        if(ch==EOF)break;
        fputc(convertch,stdout);
    }

    return 0;
}