#include <stdio.h>
void SwapInteger(int *pa, int *pb){
    int *temp = pa;
    pa = pb;
    pb = temp;
    printf("*pa = %d , *pb = %d\n",*pa, *pb);
}

int main(void){
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("*ptr1 = %d , *ptr2 = %d\n",*ptr1, *ptr2);
    SwapInteger(ptr1, ptr2);
    printf("*ptr1 = %d , *ptr2 = %d\n",*ptr1, *ptr2);

    return 0;
}