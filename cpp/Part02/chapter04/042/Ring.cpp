#include "Ring.h"

void Point::InitPoint(int x, int y){
    xpos = x;
    ypos = y;
}

void Point::ShowPointInfo() const {
    cout<<"Point : "<<"["<<xpos<<", "<<ypos<<"], ";
}

void Circle::InitCircle(int x, int y, int r){
    center.InitPoint(x, y);
    radius = r;
}

void Circle::ShowCircleInfo() const {
    center.ShowPointInfo();
    cout<<"Radius : "<<radius<<endl;
}

void Ring::InitRing(int x1, int y1, int r1, int x2, int y2, int r2){
    InCircle.InitCircle(x1, y1, r1);
    OutCircle.InitCircle(x2, y2, r2);
}

void Ring::ShowRingInfo() const {
    cout<<"------- In Circle Info -------"<<endl;
    InCircle.ShowCircleInfo();
    cout<<"------- Out Circle Info -------"<<endl;
    OutCircle.ShowCircleInfo();
}

