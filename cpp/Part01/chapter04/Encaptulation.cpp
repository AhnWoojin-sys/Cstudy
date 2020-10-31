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
        int GetX()const{
            return xpos;
        }

        int GetY()const{
            return ypos;
        }

        void ShowPoint()const{
            cout<<"xpos = "<<xpos<<"ypos = "<<ypos<<endl;
        }
};

class Circle{
    private:
        Point center;
        int radius;
    public:
        void Init(int x, int y, int r){
            center.Init(x, y);
            radius = r;
        }
        int GetR()const{
            return radius;
        }
        void ShowCircle()const{
            cout<<"center = "<<"["<<center.GetX()<<", "<<center.GetY();
            cout<<"]"<<" Radius = "<<radius<<endl;
        }
};

class Ring{
    private:
        Circle inCircle;
        Circle outCircle;
    public:
        void Init(int inx, int iny, int inr, int outx, int outy, int outr ){
            inCircle.Init(inx, iny, inr);
            outCircle.Init(outx, outy, outr);
        }
        void ShowRing(){
            cout<<"Inner Circle Info ..."<<endl;
            inCircle.ShowCircle();
            cout<<"Outter Circle Info ...`"<<endl;
            outCircle.ShowCircle();
        }
};

int main(void){
    Ring ring;

    ring.Init(1, 1, 4, 2, 2, 9); //(x, y ,r) (x, y ,r)
    ring.ShowRing();

    return 0;
}