#pragma once
#include<cmath>
#include"Figure.h"
class Cone :public Figure{
public:
	/*double GetSquare(*Figure cole) override {
		square = 3.14* r(r + sqrt(pow(*r, 2) + pow(h, 2)));
	}*/
	Cone(double a=0, double b =0) : Figure(a, b) {}; 
		double area() override { return (3.14*r*(r + sqrt(pow(r, 2) + pow(h, 2)))); }
		double volume() override { return(3.14 * (pow(r, 2) * h)/3); }
};