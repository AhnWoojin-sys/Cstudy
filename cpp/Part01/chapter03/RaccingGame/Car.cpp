#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::InitMembers(const char * ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
}

void Car::ShowCarState(){
    cout<<"gamer ID : "<<gamerID<<endl;
    cout<<"Fuel Gauge : "<<fuelGauge<<endl;
    cout<<"Currently Your car speed : "<<curSpeed<<endl;
}

void Car::Accel(){
    if(fuelGauge<=0){
        cout<<"Not enough energy"<<endl;
        return ;
    }
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break(){
    if(curSpeed<=0){
        cout<<"Currently Your car is stopped"<<endl;
        return ;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}