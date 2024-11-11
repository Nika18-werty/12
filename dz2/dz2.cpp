#include <iostream>
#include "ForeignPassport.h"

using namespace std;

int main()
{

    Passport passport("Вероніка", "Демчук", "18.10.2000", "ID12345678", "01.01.2020", "01.01.2050");

    passport.printInfo();

    cout << endl;

    ForeignPassport foreignPassport("Вероніка", "Демчук", "18.10.2000", "SD678543", "01.01.2020", "01.01.2050",
        "FM12345678", "Дипломатична віза до 2050");

    foreignPassport.printInfo();

}