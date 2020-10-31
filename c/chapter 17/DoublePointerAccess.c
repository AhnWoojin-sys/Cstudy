#include <stdio.h>

int main(void){
    int num = 20;
    int *ptr = &num;
    int **dptr = &ptr;
    int *ptr2;

    printf("*ptr = %d\n", *ptr);
    printf("**dptr = %d\n", **dptr);
    printf("*dptr = %p\n", *dptr);
    printf("&num = %p\n", &num);
    ptr2 = *dptr;
    
    printf("*ptr2 = %d \n", *ptr2);
    
    *ptr2 = 30;

    printf("num = %d \n", num);

    return 0;
}