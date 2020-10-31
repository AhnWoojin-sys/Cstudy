#include <stdio.h>

int main(void)
{
    int i=0, total=0;

    do
    {
        total += i;
        i += 2;
        
    } while (i<=100);

    printf("%d", total);

    return 0;
}   