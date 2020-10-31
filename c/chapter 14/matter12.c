#include <stdio.h>
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap3(int *a, int *b, int *c){
    Swap(a, c);
    Swap(b, c);
}

int main(void)
{   int a = 10, b = 20, c = 30;
    Swap3(&a, &b, &c);

    printf("a = %d b = %d c = %d", a, b, c);
    return 0;
}