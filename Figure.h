#pragma once
class Figure {
protected:
	double r, h;//висота і радіус
public:
	Figure(double a, double b ) { r = a; h = b; };//створюємо конструктор та присвоюємо передані значення
	virtual double area() { return (0); }//створюємо віртуальну ф-цію, що повертає площу
	virtual double volume() { return (0); }//створюємо віртуальну ф-цію, що повертає об'єм
	//double square;
	//double GetPer() { return perimetr; };
	//virtual double GetSquare(&Figure) { return square; };
	//virtual double GetPerimeter(double, double) { return GetPer(); }

};