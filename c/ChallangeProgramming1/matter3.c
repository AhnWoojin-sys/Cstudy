#include <stdio.h>

int main(void){
    int num1, num2;
    int num1Remainder, num2Remainder;
    int gcd = 0;
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        puts("It is denied access");
        return -1;
    }
    
    for(int i=1;i<=num1;i++){
        num1Remainder = num1 % i;
        num2Remainder = num2 % i;
        if(num1Remainder==num2Remainder){
            gcd = i;
        }
    }
    printf("It is gcd between %d or %d : %d",num1, num2, gcd);
    return 0;
}