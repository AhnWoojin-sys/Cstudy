#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);

int main(void)
{
    double cel, fah;
    printf("Type your Celsius, Fahrenheit : ");
    scanf("%lf %lf",&cel, &fah);
    
    cel = CelToFah(cel);
    fah = FahToCel(fah);

    printf("Your Cel:%.2lf\nYour Fah: %.2lf",cel , fah);

    return 0;
}

double CelToFah(double cel)
{
    double var;
    var=(cel*1.8)+32;

    return var;
}

double FahToCel(double fah)
{
    double foo;
    foo=(fah-32)/1.8;

    return foo;
}