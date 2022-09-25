#include<iostream>
#include<Windows.h>
#include"Figure.h"
#include"Cone.h"
#include"Cylinder.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� �������� �� ������� ����
	Figure* f[2];
	cout << "������ ����� ������: ";
	double r,h;
	cin >> r;
	cout << "������ ������ ������: ";
	cin>> h;
	if (r <= 0 || h <= 0) {//���� ����� ��� ������ �����/��� ����, �� �������� � ��������
		exit(0);
	}
	Cone cone(r, h);
	//���������� ��'��� ��������� ����� Cone �� ��������� ���������
	f[0] = &cone;
	cout <<"����� ������: " << f[0]->area() << endl;//�������� ��������� �-��� �� �������� �� �� �������
	cout <<"��'�� ������:"<< f[0]->volume() << endl<<endl;//�������� ��������� �-��� �� �������� �� �� �������
	cout << "������ ����� �������: ";
	cin >> r;
	cout << "\n������ ������ �������: ";
	cin >> h;
	if (r <= 0 || h <= 0) {
		exit(0);
	}
	Cylinder cylinder(r,h);
	//���������� ��'��� ��������� ����� Cylinder �� ��������� ���������
	f[1] = &cylinder;
	cout <<"����� �������: " << f[1]->area() << endl;
	cout << "��'�� �������: " << f[1]->volume() << endl;
	return 0;
}