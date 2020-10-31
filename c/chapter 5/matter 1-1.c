#include <stdio.h>

int main(void)
{
    int lx, ly;
    int rx, ry;
    int height, width, area;
    
    printf("Please type your Top left location");
    scanf("%d %d", &lx, &ly);

    printf("Please type your Bottom right location");
    scanf("%d %d", &rx, &ry);

    height = ry - ly;
    width = rx - lx;
    area = height * width;

    printf("The x y location of top left : %d, %d\n", lx, ly);
    printf("The x y location of Bottom right : %d, %d\n", rx, ry);
    printf("Rectangle Area : %d", area);

    return 0;
}