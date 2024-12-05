#ifndef _OBLICZENIA_H
#define _OBLICZENIA_H

namespace calc
{
    
class Wektor{
    
    private:
        float m_X;//m_ przed nazwa to onzacza ze zmienna jest prywatna bo to dorby nawyk do pisania kodu obiektowego w cpp
        float m_Y;

    public:
        Wektor();
        Wektor(float, float);
        float lenght();
};

class Punkt{

    private:
        float m_X;
        float m_Y;

    public:
        Punkt();
        Punkt(float, float);
        float getX();
        float getY();
        void setX(float);
        void setY(float);
        float distanceTo(Punkt&);
        Wektor toVector(Punkt&);
};

}

#endif
