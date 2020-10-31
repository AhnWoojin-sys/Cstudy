#include <stdio.h>

//2단 부터 9단까지 반복

int main(void)
{
    int i=2, j=1;
    
    while(i<=9) //1단부터 9단
    {
        j=1;
        while(j<=9)
        {
            printf("%d X %d = %d\n",i ,j ,i*j );
            
            j++; //다음수로 넘어감
        }
        i++; //다음단으로 넘어감
    }

    return 0;
}