#pragma once
class Figure {
protected:
	double r, h;//������ � �����
public:
	Figure(double a, double b ) { r = a; h = b; };//��������� ����������� �� ���������� ������� ��������
	virtual double area() { return (0); }//��������� ��������� �-���, �� ������� �����
	virtual double volume() { return (0); }//��������� ��������� �-���, �� ������� ��'��
	//double square;
	//double GetPer() { return perimetr; };
	//virtual double GetSquare(&Figure) { return square; };
	//virtual double GetPerimeter(double, double) { return GetPer(); }

};