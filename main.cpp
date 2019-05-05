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
	cout << "Если вы хотите работать со стуктурой 'Child' введите '1'" << endl;
	cout << "Если вы хотите работать со стуктурой 'Complex' введите '2'" << endl;
	cout << "Если вы хотите работать со стуктурой 'Tiles' введите '3'" << endl;
	cout << "Если вы хотите работать со стуктурой 'Vector' введите '4'" << endl;
	cin >> act;
	switch (act)
	{
        case '1':
        {
            setlocale(LC_ALL, "Russian");

            char name1[] = "Алиса";
            char surname1[] = "Сыроваткина";
            int age1 = 1;

            Child class_1(name1, surname1, age1);
            Child class_2 = class_1;

            cout << endl << "Содержимое объекта class_1:" << endl;
            class_1.output();

            cout << endl << "Содержимое объекта class_2:" << endl;
            class_2.output();

            break;
        }

		case '2':
        {
            setlocale(LC_ALL, "Russian");

            Complex c1 = Complex(12, -4);
            Complex c2;

            cout << "Структура c1" << endl;
            c1.output();
            c1.mod();

            cout << "Структура c2" << endl;
            c2.output();
            c2.mod();

            Complex c3 = c1;
            cout << "Структура c3" << endl;
            c3.output();
            c3.mod();

            break;
        }

        case '3':
        {
            setlocale(LC_ALL, "Russian");

            char str1[] = "Уральская плитка";
            int h = 14;
            int w = 21;
            int p = 700;

            Tiles class_1(str1, h, w, p);
            Tiles class_2 = class_1;

            cout << endl << "Содержимое объекта class_1:" << endl;
            class_1.getData();

            cout << endl << "Содержимое объекта class_2:" << endl;
            class_2.getData();

            break;
        }

		case '4':
        {
            setlocale(LC_ALL, "Russian");

            Vector c1 = Vector(21, -7);
            Vector c2, c4, c5;

            cout << "Структура c1" << endl;
            c1.output();
            c1.mod();

            cout << "Структура c2" << endl;
            c2.output();
            c2.mod();

            Vector c3 = c1;
            cout << "Структура c3" << endl;
            c3.output();
            c3.mod();

            c4.sum(c1, c2);
            cout << "Структура c4" << endl;
            c4.output();

            c5.dif(c2, c3);
            cout << "Структура c5" << endl;
            c5.output();

            break;
        }

        default:
        cout << "Некорректно введены данные";
        break;
	}
}
