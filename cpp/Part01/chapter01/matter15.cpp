#include <iostream>
#include <cstdlib>

using namespace std;

class Point{
    private:
        int xpos;
        int ypos;
    public:
        Point(int p1, int p2){
            xpos = p1;
            ypos = p2;
        }
        void ShowPoint(){
            cout<<"Xpos : "<<xpos<<endl;
            cout<<"Ypos : "<<ypos<<endl;
        }
        Point& PntAdder(const Point &p1, const Point &p2){
            Point add(0, 0);
            add.xpos = p1.xpos + p2.xpos;
            add.ypos = p1.ypos + p2.ypos;
            return add;
        }
};

int main(void){
    Point p1(10, 20);
    Point p2(10, 20);
    Point p3(0, 0);
    p3 = p1.PntAdder(p1,p2);
    p3.ShowPoint();
}