#include <stdio.h>

int main(void)
{
    int num, i=0, total=0;

    while(i<5)
    {
        num=0;

        printf("Please type your number");
        scanf("%d", &num);
        while(num<1)
        {
            printf("Please type positive number!!");
            scanf("%d", &num);
        }
        total += num;
        i++;
    }
    printf("%d", total);
    return 0;
}