#include <stdio.h>
int SquareByValue(int x);
void SquareByReference(int *x);

int main(void)
{
    int num1, num2;
    int *ptr1 = &num1;
    
    printf("Type your number num 1 num 2\n");
    scanf("%d %d", &num1, &num2);

    num1 = SquareByValue(num1);
    SquareByReference(&num2);
    
    printf("%d \n", num1);
    printf("%d \n", num2);
    
    return 0;
}

int SquareByValue(int x)
{
    x = x*x;
    return x;
}
void SquareByReference(int *x)
{
    *x = (*x)*(*x);
}

