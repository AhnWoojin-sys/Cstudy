#include <stdio.h>
#include <string.h>
void Palindrome(char *str, int len){
    int halflen = 0;
    halflen = len/2;
    int count = 0;
    for(int i=0;i<halflen;i++){
        if(str[i] == str[len-i-1]){
            count++;
            if(count==halflen){
                printf("It is palindrome");
            }
        };
        
    }
}

int main(void){
    char * str;
    int len;
    gets(str);
    len = strlen(str);
    Palindrome(str, len);
    return 0;
}