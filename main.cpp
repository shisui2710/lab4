#include <iostream>
#include <math.h>

#include "Child.h"
#include "Complex.h"
#include "Tiles.h"
#include "Vector.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	char act;
	cout << "���� �� ������ �������� �� ��������� 'Child' ������� '1'" << endl;
	cout << "���� �� ������ �������� �� ��������� 'Complex' ������� '2'" << endl;
	cout << "���� �� ������ �������� �� ��������� 'Tiles' ������� '3'" << endl;
	cout << "���� �� ������ �������� �� ��������� 'Vector' ������� '4'" << endl;
	cin >> act;
	switch (act)
	{
        case '1':
        {
            setlocale(LC_ALL, "Russian");

            char name1[] = "�����";
            char surname1[] = "�����������";
            int age1 = 1;

            Child class_1(name1, surname1, age1);
            Child class_2 = class_1;

            cout << endl << "���������� ������� class_1:" << endl;
            class_1.output();

            cout << endl << "���������� ������� class_2:" << endl;
            class_2.output();

            break;
        }

		case '2':
        {
            setlocale(LC_ALL, "Russian");

            Complex c1 = Complex(12, -4);
            Complex c2;

            cout << "��������� c1" << endl;
            c1.output();
            c1.mod();

            cout << "��������� c2" << endl;
            c2.output();
            c2.mod();

            Complex c3 = c1;
            cout << "��������� c3" << endl;
            c3.output();
            c3.mod();

            break;
        }

        case '3':
        {
            setlocale(LC_ALL, "Russian");

            char str1[] = "��������� ������";
            int h = 14;
            int w = 21;
            int p = 700;

            Tiles class_1(str1, h, w, p);
            Tiles class_2 = class_1;

            cout << endl << "���������� ������� class_1:" << endl;
            class_1.getData();

            cout << endl << "���������� ������� class_2:" << endl;
            class_2.getData();

            break;
        }

		case '4':
        {
            setlocale(LC_ALL, "Russian");

            Vector c1 = Vector(21, -7);
            Vector c2, c4, c5;

            cout << "��������� c1" << endl;
            c1.output();
            c1.mod();

            cout << "��������� c2" << endl;
            c2.output();
            c2.mod();

            Vector c3 = c1;
            cout << "��������� c3" << endl;
            c3.output();
            c3.mod();

            c4.sum(c1, c2);
            cout << "��������� c4" << endl;
            c4.output();

            c5.dif(c2, c3);
            cout << "��������� c5" << endl;
            c5.output();

            break;
        }

        default:
        cout << "����������� ������� ������";
        break;
	}
}
