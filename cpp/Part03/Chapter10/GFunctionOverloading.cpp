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
};

Point operator+(const Point &pos1, const Point &pos2){
    cout<<"Called operator+"<<endl;
    Point pos(pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos);
    return pos;
} 

int main(void){
    Point pos1(3, 4);
    Point pos2(5, 10);
    cout<<"--------------"<<endl;
    Point pos3 = pos1+pos2;
    cout<<"--------------"<<endl;

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}