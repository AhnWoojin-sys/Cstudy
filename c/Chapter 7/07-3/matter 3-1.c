#include <stdio.h>

int main(void)
{
    int total=0, num=0;
    do
    {
        printf("Type your integer(0 to quit): ");
        scanf("%d", &num);
        total += num;
    }while (num!=0);
    
    printf("Total: %d", total);

    return 0;
}