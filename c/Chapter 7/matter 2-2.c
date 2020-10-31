#include <stdio.h>

int main(void)
{
    int i=0, j=0;

    while(i<5)
    {
        while(j<i)
        {
            printf("○");
            j++;
        }
        printf("*\n");
        i++;
        j=0;
    }
}