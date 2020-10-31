#include <iostream>
using namespace std;

class Point{
    private:
        int xpos;
        int ypos;
    public:
        void Init(int x, int y){
            xpos = x;
            ypos = y;
        }
        int getX() const {
            return xpos;
        }
        int getY() const {
            return ypos;
        }
        void ShowPointInfo(){
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};
    
class Circle{
    private:
        Point center;
        int radius;
    public:
        void Init(Point p, int r){
            center = p;
            radius = r;
        }
        Point getCenter() const {
            return center;
        }
        int getRadius() const {
            return radius;
        }
        void ShowCircleInfo(){
            cout<<"Center : ["<<center.getX()<<", "<<center.getY()<<"]"<<endl;
            cout<<"Radius : "<<radius<<endl;
        }
};

class Ring{
    private:
        Circle InCircle;
        Circle OutCircle;
    public:
        void Init(int x1, int y1, int center1, int x2, int y2, int center2){
            Point inC;
            Point outC;
            inC.Init(x1, y1);
            outC.Init(x2, y2);
            InCircle.Init(inC, center1);
            OutCircle.Init(outC, center2);
        }
        void ShowRingInfo(){
            cout<<"---- Inner Circle Infor ----"<<endl;
            cout<<"Center : ["<<InCircle.getCenter().getX()<<", "<<InCircle.getCenter().getY()<<"]";
            cout<<"OutCircle : "<<InCircle.getRadius()<<endl;
            cout<<"---- outter Circle Infor ----"<<endl;
            cout<<"Center : ["<<OutCircle.getCenter().getX()<<", "<<OutCircle.getCenter().getY()<<"]";
            cout<<"OutCircle : "<<OutCircle.getRadius()<<endl;
        }
};


int main(void){
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}