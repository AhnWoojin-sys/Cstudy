#include <stdio.h>
#include <string.h>
void SwapIntPtr(int **dptr1, int **dptr2){
    puts("=============== In SwapIntPtr Function ===============");
    printf("dptr1 = %p, dptr2 = %p\n", dptr1, dptr2);
    printf("**dptr = %d, **dptr = %d\n", **dptr1, **dptr2);
    int *temp = *dptr1;
    *dptr1 = *dptr2;
    *dptr2 = temp;
    printf("**dptr = %d, **dptr = %d\n", **dptr1, **dptr2);
    puts("=============== In SwapIntPtr Function ===============");
}

int main(void){
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    SwapIntPtr(&ptr1, &ptr2);
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
    printf("num1 = %d, num2 = %d\n", num1, num2);


    return 0;
}