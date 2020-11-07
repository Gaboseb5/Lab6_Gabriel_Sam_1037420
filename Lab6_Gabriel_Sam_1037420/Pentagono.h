#pragma once
#include "Figurasgeometricas.h"
class Pentagono :
    public Figurasgeometricas
{
public:
    Pentagono() {};
    ~Pentagono() {};

    double GetArea() override;
    double GetPerimeter() override;
};

