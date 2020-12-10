#include <iostream>

using namespace std;

class Complex{
private:
    double real, img;
public:
    Complex(double real = 0, double img = 0) : real(real), img(img){}
    Complex operator+(const Complex &ref); 
    Complex operator+(const char* str);

    Complex operator-(const Complex &ref);
    Complex operator*(const Complex &ref);
    Complex operator/(const Complex &ref);
    Complex& operator=(const Complex &ref);
    Complex& operator+=(const Complex&ref);
    Complex& operator-=(const Complex&ref);
    Complex& operator*=(const Complex&ref);
    Complex& operator/=(const Complex&ref);
    void ShowComplexMembers();
};

Complex Complex::operator+(const Complex &ref){
    Complex temp(real+ref.real, img+ref.img);
    return temp;
}
Complex Complex::operator+(const char* str){
    
}

Complex Complex::operator-(const Complex &ref){
    Complex temp(real-ref.real, img-ref.img);
    return temp;
}
Complex Complex::operator*(const Complex &ref){
    Complex temp(real*ref.real - img*ref.img, real*ref.real + img*ref.img);
    return temp;
}
Complex Complex::operator/(const Complex &ref){
    Complex temp(
        (real*ref.real+img*ref.img) / (ref.real*ref.real + ref.img*ref.img),
        (ref.real*img-real*ref.img)/ (ref.real*ref.real + ref.img*ref.img));
    return temp;
}
Complex& Complex::operator=(const Complex &ref){
    this->img = ref.img;
    this->real = ref.real;
    return *this;
}

Complex& Complex::operator+=(const Complex&ref){
    *this = *this + ref;
    return *this;
}
Complex& Complex::operator-=(const Complex&ref){
    *this = *this - ref;
    return *this;
}
Complex& Complex::operator*=(const Complex&ref){
    *this = *this * ref;
    return *this;
}
Complex& Complex::operator/=(const Complex&ref){
    *this = *this / ref;
    return *this;
}

void Complex::ShowComplexMembers(){
    cout<<"Real number :"<<this->real<<endl;
    cout<<"imaginary number : "<<this->img<<endl;
}

int main(void){
    Complex a(20, 10);
    Complex b(10, 20);

    a += b;

    a.ShowComplexMembers();
    return 0;
}