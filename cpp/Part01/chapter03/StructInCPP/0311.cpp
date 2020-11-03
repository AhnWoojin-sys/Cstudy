#include <iostream>

using namespace std;

struct Point{
    int xpos;
    int ypos;

    void MovePos(int x, int y){ // Move coordinate
        xpos += x;
        ypos += y;
    } 
    void AddPoint(const Point &pos){
        xpos += pos.xpos;
        ypos += pos.ypos;
    } // increase coordinate
    void ShowPosition(){
        cout<<"Point : ["<<xpos<<", "<<ypos<<"]"<<endl;
    } // Print coordinate information
};

int main(void){
    struct Point pos1 ={12, 4};
    struct Point pos2 ={20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();

    return 0;
}