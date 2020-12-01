#include <iostream>
using namespace std;

class Point{
private:
    int xpos;
    int ypos;
public:
    Point(int xpos = 0, int ypos = 0):xpos(xpos), ypos(ypos){
        //empty
    }
    void ShowPosition() const{
        cout<<"["<<xpos<<", "<<ypos<<"}"<<endl;
    }
    Point operator+(const Point &ref){ // +operator function?
        cout<<"Called Operator+ "<<endl;
        Point pos(xpos+ref.xpos, ypos+ref.ypos);
        return pos;
    }
    Point& operator++(){
        xpos += 1;
        ypos += 1;
        return *this;
    }
    Point& operator-(){
        this->xpos = -xpos;
        this->ypos = -ypos;

        return *this;
    }

    Point& operator~(){
        this->xpos = ~xpos;
        this->ypos = ~ypos;

        return *this;
    }

    friend Point& operator--(Point &ref);
};

Point& operator--(Point &ref){
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

int main(void){
    Point pos1(3, 4);
    ++pos1;
    pos1.ShowPosition();
    --pos1;
    pos1.ShowPosition();

    ++(++pos1);
    pos1.ShowPosition();
    --(--pos1);
    pos1.ShowPosition();

    Point pos2 = -pos1;

    pos2.ShowPosition();
    pos2 = ~pos1;
    pos2.ShowPosition();

    return 0;
}