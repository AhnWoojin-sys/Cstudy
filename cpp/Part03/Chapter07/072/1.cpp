#include <iostream>

using namespace std;

class Rectangle{
private:
    int x;
    int y;
public:
    Rectangle(int x, int y): x(x), y(y){
        //empty
    }
    void ShowAreaInfo(){
        cout<<x * y<<endl;
    };
};


class Square : public Rectangle{
private:
public:
    Square(int x): Rectangle(x, x){
        //empty
    }
};

int main(void){
    Rectangle rec(4, 3);
    Square rec2(7);

    rec.ShowAreaInfo();
    rec2.ShowAreaInfo();
    return 0;
}
