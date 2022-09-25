#include<iostream>
#include<Windows.h>
#include"Figure.h"
#include"Cone.h"
#include"Cylinder.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//створюмо вказівник на базовий клас
	Figure* f[2];
	cout << "Введіть радіус конуса: ";
	double r,h;
	cin >> r;
	cout << "Введіть висоту конуса: ";
	cin>> h;
	if (r <= 0 || h <= 0) {//якщо радіус або висота більші/рівні нулю, то виходимо з програми
		exit(0);
	}
	Cone cone(r, h);
	//присвоюємо об'єкт похідного класу Cone за допомогою посилання
	f[0] = &cone;
	cout <<"Площа конуса: " << f[0]->area() << endl;//визиваємо віртуальну ф-цію та виводимо її на консоль
	cout <<"Об'єм конуса:"<< f[0]->volume() << endl<<endl;//визиваємо віртуальну ф-цію та виводимо її на консоль
	cout << "Введіть радіус циліндра: ";
	cin >> r;
	cout << "\nВведіть висоту циліндра: ";
	cin >> h;
	if (r <= 0 || h <= 0) {
		exit(0);
	}
	Cylinder cylinder(r,h);
	//присвоюємо об'єкт похідного класу Cylinder за допомогою посилання
	f[1] = &cylinder;
	cout <<"Площа циліндра: " << f[1]->area() << endl;
	cout << "Об'єм циліндра: " << f[1]->volume() << endl;
	return 0;
}