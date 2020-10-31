#include <stdio.h>

struct point{
    int xpos;
    int ypos;
    struct point *ptr;
};

int main(void){
    struct point pos1 = {10, 20};
    struct point pos2 = {20, 30};
    struct point pos3 = {30, 40};

    pos1.ptr = &pos2; // connect from pos1 to pos2
    pos2.ptr = &pos3; // connect from pos2 to pos3
    pos3.ptr = &pos1; // connect from pos3 to pos1

    printf("Connection... \n");
    printf("connect  [%d, %d] and [%d, %d]\n",
        pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
    printf("connect  [%d, %d] and [%d, %d]\n",
        pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
    printf("connect  [%d, %d] and [%d, %d]\n",
        pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);


    return 0;
}