#include <stdio.h>

struct Point{
    int xpos;
    int ypos;
};

int main(void){
    struct Point mouse = {20, 30};
    struct Point *pptr = &mouse;
    
    pptr->xpos = 20; // = (*pptr).xpos
    pptr->ypos = 30;
    
    printf("%d \n", pptr->xpos);
    printf("%d \n", pptr->ypos);

    return 0;
}
