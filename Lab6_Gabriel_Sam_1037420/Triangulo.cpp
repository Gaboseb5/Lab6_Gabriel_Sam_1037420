#include "Triangulo.h"

double Triangulo::GetArea() {
	return (width * height)/2;
}

double Triangulo::GetPerimeter() {
	return 2*(lon) + width;
}