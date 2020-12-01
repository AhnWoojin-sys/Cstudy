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
};

int main(void){
    Point pos1(3, 4);
    Point pos2(10, 20);
    cout<<"---------------------------------------------"<<endl;
    Point pos3=pos1.operator+(pos2);
    cout<<"---------------------------------------------"<<endl;

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();
    return 0;
}