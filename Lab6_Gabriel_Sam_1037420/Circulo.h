#pragma once
#include "Figurasgeometricas.h"
class Circulo :
    public Figurasgeometricas
{
public:
    Circulo() {};
    ~Circulo() {};
    double GetArea() override;
    double GetPerimeter() override;
};

