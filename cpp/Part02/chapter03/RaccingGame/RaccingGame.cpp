#include "Car.h"
#define FUEL 100

int main(void){
    Car run99;
    run99.InitMembers("Run99", FUEL);
    run99.ShowCarState();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    return 0;
}