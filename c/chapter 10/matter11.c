#include <stdio.h>

int main(void)
{
    int num[5];
    int large, small, total;
    int i;
    printf("Type Five numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0;i<5;i++)
    {
        large = num[0];
        if(large<num[i])
            large = num[i]; 
    }

    for(i=0;i<5;i++)
    {
        small = num[0];
        if(small>num[i])
            small = num[i]; 
    }

    for(i=0;i<5;i++)
    {
        total = 0;
        total += num[i];
    }

    printf("large number : %d \n Small number : %d \n total : %d ", large, small, total);

    return 0;
}