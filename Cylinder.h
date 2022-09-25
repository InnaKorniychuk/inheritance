#pragma once
#include"Figure.h"
#include<cmath>
class Cylinder : public Figure {
public:
	Cylinder(double a = 0, double b = 0) :Figure(a, b) {};
	double area() override { return(2 * 3.14 * r * (h + r)); }//викликаємо віртуальну ф-цію та повертаємо площу циліндра
	double volume() override { return(3.14 * pow(r, 2) * h); } // викликаємо віртуальну ф - цію та повертаємо об'єм циліндра
};