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
    Point& operator++(){ // 전위 증가
        xpos += 1;
        ypos += 1;
        return *this;
    }
    const Point operator++(int){
        const Point retobj(xpos, ypos);
        xpos+=1;
        ypos+=1;
        return retobj;
    }
    friend Point& operator--(Point &ref);
    friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref){
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

const Point operator--(Point &ref, int){
    const Point retobj(ref);
    ref.xpos-=1;
    ref.ypos-=1;
    return retobj;
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

    return 0;
}