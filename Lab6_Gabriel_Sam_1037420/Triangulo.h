#pragma once
#include "Figurasgeometricas.h"
class Triangulo :
    public Figurasgeometricas
{
public:
    Triangulo() {};
    ~Triangulo() {};

    double GetArea() override;
    double GetPerimeter() override;
};

