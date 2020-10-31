#include <stdio.h>

int main(void) 
{
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    *ptr1 += 10;
    *ptr2 -= 10;

    ptr1 = &num2;
    ptr2 = &num1;
    
    printf("%d, %d\n", *ptr1, *ptr2);
    printf("num1 : %p \n", num1);
    printf("num2 : %p \n", num2);
    printf("ptr2 : %p \n", *ptr2);
    printf("ptr1 : %p \n", *ptr1);

    return 0;
}