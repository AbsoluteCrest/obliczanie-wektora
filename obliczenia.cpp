#include "obliczenia.h"
#include<cmath>

namespace calc
{
    
Punkt::Punkt(){
    m_X = 0.f;
    m_Y = 0.f;
}

Punkt::Punkt(float x, float y){
    m_X = x;
    m_Y = y;
}

float Punkt::getX(){
    return m_X;
}

float Punkt::getY(){
    return m_Y;
}

void Punkt::setX(float x){
    m_X = x;
}

void Punkt::setY(float y){
    m_Y = y;
}

float Punkt::distanceTo(Punkt &pkt){
    float distX = m_X - pkt.getX();
    float distY = m_Y - pkt.getY();
    float wynik = sqrt(pow(distX, 2)+pow(distY, 2));
    return wynik;
}

Wektor::Wektor(){
    m_X = 0.f;
    m_Y = 0.f;
}

Wektor::Wektor(float x, float y){
    m_X = x;
    m_Y = y;
}

float Wektor::lenght(){
    float wynik = sqrt(pow(m_X, 2)+pow(m_Y, 2));
    return wynik;
}

Wektor Punkt::toVector(Punkt &pkt){
    float distX = m_X - pkt.getX();
    float distY = m_Y - pkt.getY();
    Wektor W(distX, distY);
    return W;
}

}
