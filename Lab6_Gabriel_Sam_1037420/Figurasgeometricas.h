#pragma once
class Figurasgeometricas
{
public:
	double width;
	double height;
	double lon;
	int type;
	double area;
	double perimeter;

	Figurasgeometricas() { width = 0; height = 0; type = 0; area = 0; perimeter = 0; lon = 0; };
	~Figurasgeometricas() {};
	virtual double GetArea();
	virtual double GetPerimeter();
};

