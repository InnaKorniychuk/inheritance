#pragma once
#include<cmath>
#include"Figure.h"
class Cone :public Figure{
public:
	/*double GetSquare(*Figure cole) override {
		square = 3.14* r(r + sqrt(pow(*r, 2) + pow(h, 2)));
	}*/
	Cone(double a, double b) : Figure(a, b) { };
		double area() override{ return (3.14*r*(r + sqrt(pow(r, 2) + pow(h, 2)))); }// ��������� ��������� � - ��� �� ��������� ����� ������
		double volume()override {// ��������� ��������� � - ��� �� ��������� ��'�� ������
		/*	double v = 3.14 * pow(r, 2) * h / 3;
			double v = 3.14 * pow(r, 2) ;
			v = v * h;
			v = v / 3;*/
			return (3.14 * pow(r, 2) * h / 3);
		}
};