#include <stdio.h>

int main(void)
{   
    const double pi=3.14;
    double rad, area;
    
    printf("Type your radius");
    scanf("%lf", &rad);
    
    area = pi*pi*rad;
    printf("This is your circleArea %.2lf ", area);

    return 0;
}