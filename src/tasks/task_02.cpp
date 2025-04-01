#include <iostream>

#include "console.h"
#include "taskManager.h"
#include "vector.h"

// Створити тип даних - клас вектор, який має вказівник на int, число елементів і змінну стану.У класі визначити
// - конструктор без параметрів(виділяє місце для одного елемента та інінціалізує його в нуль);
// - конструктор з одним параметром - розмір вектора(виділяє місце та інінціалізує масив значенням нуль);
// - конструктор із двома параметрами - розмір вектора та значення ініціалізації(виділяє місце(значення перший аргумент) та інінціалізує значенням другого аргументу).
// - конструктор копій та операцію присвоєння; // !!!
// - деструктор звільняє пам'ять. o визначити функцію, яка присвоює елементу масиву деяке значення(параметр за замовчуванням);
// - функцію яка одержує деякий елемент масиву;
// - визначити функції друку, додавання, віднімання, які здійснюють ці арифметичні операції з даними цього класу, множення на ціле типу short;
// - визначити функції порівняння : більше, менше або рівно, які повертають true або false.
// - змінну стани встановлювати код помилки, коли не вистачає пам'яті, виходить за межі масиву. Передбачити можливість підрахунку числа об'єктів даного типу. Написати програму тестування всіх можливостей цього класу.

using namespace std;

void task_02()
{
	Vector v1;
	Vector v2(5);
	Vector v3(5, 2);

	cout << "v1: ";
	v1.print();

	cout << "v2: ";
	v2.print();

	cout << "v3: ";
	v3.print();

	newLine();

	cout << "v2: ";
	v2.set(2, 10);
	v2.print();
	newLine();

	cout << "v2[2]: " << v2.get(2) << endl;
	cout << "v2 :";
	v2.print();
	newLine();

	cout << "v4 = v2 + v3: ";
	Vector v4 = v2 + v3;
	v4 = v2;
	v4.print();
	newLine();

	cout << "v5 = v3 * 3: ";
	Vector v5 = v3 * 3;
	v5.print();
	newLine();

	cout << "v2: ";
	v2.print();
	cout << "v3: ";
	v3.print();
	newLine();

	cout << "v2 == v3: " << endl;
	cout << ((v2 == v3) ? "true" : "false") << endl;
	newLine();

	cout << "v2 != v3: " << endl;
	cout << ((v2 != v3) ? "true" : "false") << endl;
	newLine();

	cout << "Objects count: " << Vector::getObjectCount() << endl;
	newLine();
}