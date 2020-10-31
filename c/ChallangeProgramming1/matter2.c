#include <stdio.h>
#include <string.h>

int main(void){
    int num1, num2;
    
    puts("Type Your 2 numbers");
    scanf("%d %d", &num1, &num2);

    if(num1<num2){
        for(int i=num1;i<=num2;i++){
            for(int j=1;j<10;j++){
                printf("%d X %d = %d\n", i, j, i*j);
            }
        }
    }
    if(num1>num2){
        for(int i=num2;i<=num1;i++){
            for(int j=1;j<10;j++){
                printf("%d X %d = %d\n", i, j, i*j);
            }
        }
    }

    return 0;
}