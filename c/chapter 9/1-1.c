#include <stdio.h>
int maxnum(int a, int b, int c);
int minnum(int a, int b, int c);

int main(void)
{
    int num1, num2, num3;
    int sn;
    int bn;
    
    printf("Type your three numbers\n");
    scanf("%d %d %d",&num1, &num2, &num3);
    
    sn = minnum(num1, num2, num3);
    bn = maxnum(num1, num2, num3);

    printf("Your small number : %d\n", sn);
    printf("Your big number : %d\n", bn);
    return 0;
}


int maxnum(int a, int b, int c)
{
    if (a>b)
        return (a > c)? a: c;
    else
        return (b > c)? b: c;
}


int minnum(int a, int b, int c)
{
    if (a>b)
        return (c > b)? b: c;
    else
        return (a > c)? c: a;
}