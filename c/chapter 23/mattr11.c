#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

void SwapPoint(Point *ptr1, Point *ptr2);
void ShowPoint(Point pos1, Point pos2);

int main(void){
    Point pos1 = {10, 20};
    Point pos2 = {20, 40};
    
    ShowPoint(pos1, pos2);
    SwapPoint(&pos1, &pos2);
    ShowPoint(pos1, pos2);

    return 0;
}

void SwapPoint(Point *ptr1, Point *ptr2){
    Point temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void ShowPoint(Point pos1, Point pos2){
    printf("{%d %d} {%d %d}\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}