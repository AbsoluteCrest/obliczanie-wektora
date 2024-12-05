#include<iostream>
#include "obliczenia.h"

int main(){

    calc::Punkt A(1.f, 1.f);
    calc::Punkt B(4.f, 5.f);

    std::cout << "Odleglosc miedzy punktem A i B: " << A.distanceTo(B) <<std::endl;
    calc::Wektor W1 = A.toVector(B);
    std::cout << "Dlugosc wektora: " << W1.lenght( )<<std::endl;

    return 0;
}