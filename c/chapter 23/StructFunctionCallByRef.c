#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

void OrgSymTrans(Point *ptr);
void ShowPosition(Point pos);


int main(void){
    Point pos = {10, -20};
    
    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);

    return 0;
}

void OrgSymTrans(Point *ptr){
    ptr->xpos *= -1;
    ptr->ypos *= -1;
}
void ShowPosition(Point pos){
    printf("{%d %d}\n", pos.xpos, pos.ypos);
}