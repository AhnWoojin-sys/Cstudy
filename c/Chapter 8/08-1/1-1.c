#include <stdio.h>

int main(void)
{

    for(int i=1;i<100;i++)
    {
        if(i % 7 == 0|| i % 9 == 0)
        {
            printf("Multiple of 7 or 9 : %d\n",i);
        }

    }
}