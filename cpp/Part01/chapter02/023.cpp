#include <iostream>
using namespace std;
typedef struct __point{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point *AddPoint = new Point;

    AddPoint->xpos = p1.xpos + p2.xpos;
    AddPoint->ypos = p1.ypos + p2.ypos;

    return *AddPoint;
}
int main(void){
    Point *ptr1 = new Point;
    Point *ptr2 = new Point;
    *ptr1 = {10, 20};
    *ptr2 = {20, 30};

    Point &AddPtrPoint = PntAdder(*ptr1, *ptr2);

    cout<<"PntAdder = "<<"["<<AddPtrPoint.xpos<<", "<<AddPtrPoint.ypos<<"]"<<endl;;

    delete ptr1;
    delete ptr2;

    return 0;
}