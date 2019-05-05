#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include <math.h>

using namespace std;

Child::Child(const Child &obj)
{
	name = obj.name;
	surname = obj.surname;
	age = obj.age;
}

void Child::output()
{
    setlocale(LC_ALL, "Russian");
	cout << "���: " << name << endl;
	cout << "�������: " << surname << endl;
	cout << "�������: " << age << endl;
}

Child::~Child()
{
	delete [] name;
	delete [] surname;
}



void Tiles::getData()
{
    setlocale(LC_ALL, "Russian");
	cout << "����� ������: " << brand << endl;
	cout << "����� ������: " << size_h << endl;
	cout << "������ ������: " << size_w << endl;
	cout << "���� ������: " << price << endl;
}

Tiles::~Tiles()
{
	delete[] brand;
}

Complex::Complex()
{
	x = 17;
	y = -3;
}

Complex::Complex(const Complex &obj)
{
	x = obj.x;
	y = obj.y;
}

void Complex::mod()
{
    setlocale(LC_ALL, "Russian");
	float a = sqrt(x * x + y * y);
	cout << "������ ������������ �����: " << a << endl;
}

void Complex::output()
{
    setlocale(LC_ALL, "Russian");
	cout << "����������� �����: " << x << " " << y << "i" << endl;
	cout << "X ������������ �����: " << x << endl;
	cout << "� ������������ �����: " << y << endl;
}

Complex::~Complex()
{
	cout << endl;
}



Vector::Vector()
{
	x = 31;
	y = 7;
}

Vector::Vector(const Vector &obj)
{
	x = obj.x;
	y = obj.y;
}

void Vector::output()
{
    setlocale(LC_ALL, "Russian");
	cout << "���������� �: " << x << endl;
	cout << "���������� �: " << y << endl;
}

void Vector::mod()
{
    setlocale(LC_ALL, "Russian");
	int a = sqrt(x * x + y * y);
	cout << "������ ������� = " << a << endl;
}

void Vector::sum(Vector v1, Vector v2)
{
    setlocale(LC_ALL, "Russian");
	x = v1.x + v2.x;
	y = v1.y + v2.y;
	cout << "����� ��������: " << endl;
	output();
}

void Vector::dif(Vector v1, Vector v2)
{
    setlocale(LC_ALL, "Russian");
	x = v1.x - v2.x;
	y = v1.y - v2.y;
	cout << "�������� ��������: " << endl;
	output();
}

Vector::~Vector()
{
	cout << endl;
}
