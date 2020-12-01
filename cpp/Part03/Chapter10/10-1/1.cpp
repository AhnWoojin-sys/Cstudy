#include <iostream>

using namespace std; 

class Point{
private:
    int xpos;
    int ypos;
public:
    Point(int xpos, int ypos) : xpos(xpos), ypos(ypos){
        //empty
    }
    void ShowPosition() const{
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
    friend Point operator+(const Point &pos1, const Point &pos2);
    friend Point operator-(const Point &pos1, const Point &pos2);
    friend Point& operator+=(Point &pos1, const Point &pos2);
    friend Point& operator-=(Point &pos1, const Point &pos2);
    friend bool operator==(const Point pos1,const Point pos2);
    friend bool operator!=(const Point pos1,const Point pos2);
};

Point operator+(const Point &pos1, const Point &pos2){
    cout<<"Called operator+"<<endl;
    Point pos(pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos);
    return pos;
} 

Point operator-(const Point &pos1, const Point &pos2){
    cout<<"Called operator-"<<endl;
    Point pos(pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos);
    return pos;
}

Point& operator+=(Point &pos1, const Point &pos2){
    cout<<"Called operator+="<<endl;
    pos1.xpos += pos2.xpos;
    pos1.ypos += pos2.ypos;
    return pos1;
}

Point& operator-=(Point &pos1, const Point &pos2){
    cout<<"Called operator-="<<endl;
    pos1.xpos -= pos2.xpos;
    pos1.ypos -= pos2.ypos;
    return pos1;
}

bool operator==(const Point pos1,const Point pos2){
    if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
        return true;
    else
        return false;
};

bool operator!=(const Point pos1,const Point pos2){
    if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
        return false;
    else
        return true;
};

int main(void){
    Point pos1(10, 20);
    Point pos2(20, 40);
    pos1 += pos2;
    pos1.ShowPosition();
    pos1 -= pos2;
    pos1.ShowPosition();

    return 0;
}

