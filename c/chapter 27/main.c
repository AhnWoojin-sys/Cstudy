#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"
#include "test/test.h"

int main(void){
    test();
    printf("TriangleArea(Base 4 Height 2): %lf \n",
        TriangleArea(4, 2));
    printf("CircleAria(rad 3) : %lf \n",
        CircleArea(3));
    printf("RectangleRound(Base 2.5, Height: 5.2) : %lf \n",
        RectangleRound(2.5, 5.2));
    printf("SquareRound(3) : %lf \n",
        SquareRound(3));

    return 0;
}