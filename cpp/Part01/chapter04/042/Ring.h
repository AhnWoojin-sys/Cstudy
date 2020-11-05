#ifndef __RING_H__
#define __RING_H__
#include <iostream>

using namespace std;

class Point{
    private:
        int xpos;
        int ypos;
    public:
        void InitPoint(int x, int y);
        void ShowPointInfo() const;
};

class Circle{
    private:
        Point center;
        int radius;
    public:
        void InitCircle(int x, int y, int r);
        void ShowCircleInfo() const;
};

class Ring{
    private:
        Circle InCircle;
        Circle OutCircle;
    public:
        void InitRing(int x1, int y1, int r1, int x2, int y2, int r2);
        void ShowRingInfo() const;
};

#endif
