#include <iostream>

using namespace std;

class Point{
private:
    int xpos;
    int ypos;
public:
    Point(int x = 0, int y = 0):xpos(x), ypos(y){
        //empty
    }
    friend ostream& operator<<(ostream& ostm, const Point& pos);
    friend istream& operator>>(istream& istm, Point& pos);
};

ostream& operator<<(ostream& ostm, const Point& pos){
    ostm<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return ostm;
}

istream& operator>>(istream& istm, Point& pos){
    istm>>pos.xpos>>pos.ypos;
    return istm;   
}

int main(void){
    Point pos1;

    cout<<"x, y Enter : ";
    cin>>pos1;
    cout<<pos1;
}