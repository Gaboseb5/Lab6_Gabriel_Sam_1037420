#pragma once
#include "Figurasgeometricas.h"
class Rectangulo :
    public Figurasgeometricas
{
public:
    Rectangulo() {};
    ~Rectangulo() {};

    double GetArea() override;
    double GetPerimeter() override;
};

