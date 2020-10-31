#include <stdio.h>
typedef struct point{
    int xpos;
    int ypos;
}Point;

typedef struct rectangle{
    Point lowPoint;
    Point HighPoint;
}Rectangle;

void PrintRectangleArea(Rectangle rec);


int main(void){
    Point lowPos;
    Point HighPos = {100, 100};
    printf("Type your first point");
    scanf("%d, %d", &lowPos);
    printf("Type your Second point");
    scanf("%d, %d", &HighPos);

    Rectangle rec = {lowPos, HighPos};
    PrintRectangleArea(rec);

    return 0;
}

void PrintRectangleArea(Rectangle rec){
    Point recArea={rec.HighPoint.xpos - rec.lowPoint.xpos, rec.HighPoint.ypos - rec.lowPoint.ypos};
    
    printf("%d", recArea.xpos * recArea.ypos);
}