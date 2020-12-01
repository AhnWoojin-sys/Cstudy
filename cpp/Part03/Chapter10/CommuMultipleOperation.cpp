#include <iostream>

using namespace std; 

class Point{
private:
    int xpos;
    int ypos;
public:
    Point(int xpos = 0, int ypos = 0) : xpos(xpos), ypos(ypos){
        //empty
    }
    void ShowPosition() const{
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
    Point operator*(int times){
        cout<<"called operator*"<<endl;
        Point pos(xpos*times, ypos*times);
        return pos;
    }
    friend Point operator+(const Point &pos1, const Point &pos2);
    friend Point operator*(int times, Point &ref);
};

Point operator*(int times, Point &ref){
    cout<<"Called operator*+"<<endl;;
    return ref*times;
}

int main(void){
    Point pos(1, 2);
    Point cpy;

    cpy=3*pos;
    cpy.ShowPosition();

    cpy=2*pos*5;
    cpy.ShowPosition();

    return 0;
}