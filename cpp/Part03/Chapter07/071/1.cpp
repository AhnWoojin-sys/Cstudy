#include <iostream>

using namespace std;

class Car{
private:
    int gasolineGauge;
public:
    Car(int gasolineGauge) : gasolineGauge(gasolineGauge){
        cout<<"Called Car constructor"<<endl;
    }
    int GetGasGauge() const {
        return gasolineGauge;
    }
};

class HybridCar : public Car{
private:
    int electricGauge;
public:
    HybridCar(int gasolinGauge, int electricGauge)
    : Car(gasolinGauge), electricGauge(electricGauge){
        cout<<"Called Hybridcar constructor"<<endl;
    }
    int GetElecGauge() const {
        return electricGauge;
    }
    void ShowCurrentGauge() const {
        cout<<"Remaining gasoline : "<<GetGasGauge()<<endl;
        cout<<"Remaining electric : "<<GetElecGauge()<<endl;
    }
};

class HybridEngineCar : public HybridCar{
private:
    int EngineOil;
public:
    HybridEngineCar(int gasolinGauge, int electricGauge, int EngineOil)
    : HybridCar(gasolinGauge, electricGauge), EngineOil(EngineOil){
        cout<<"Called Hybridwatercar constructor"<<endl;
    }
    void ShowCurrentGauge() const {
        cout<<"Remaining gasoline : "<<GetGasGauge()<<endl;
        cout<<"Remaining electric : "<<GetElecGauge()<<endl;
        cout<<"Remaining Water: "<<EngineOil<<endl;
    }
};

int main(void){
    HybridCar Hybrid(100, 200);

    HybridEngineCar WaterCar(100, 50, 30);

    Hybrid.ShowCurrentGauge();
    cout<<""<<endl;
    WaterCar.ShowCurrentGauge();

    return 0;
}