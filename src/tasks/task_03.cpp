#include <iostream>

#include "console.h"
#include "taskManager.h"
#include "matrix.h"

// Створити клас матриця.Даний клас містить вказівник на int, розміри рядків і стовпців та стан помилки.У класі визначити o конструктор без параметрів(виділяє місце для матриці 3 на 3 елемента та інінціалізує його в нуль);
// - конструктор з одним параметром – розмір n матриці(виділяє місце n на n та інінціалізує матрицю значенням нуль);
// - конструктор із трьома розміри матриці(n, m) та значення ініціалізації value(виділяє місце перші аргументи та інінціалізує значенням третього аргументу - value);
// - конструктор копій та операцію присвоєння; // !!!
// - деструктор звільняє пам'ять. o визначити функцію, яка присвоює елементу масиву деяке значення(параметр за замовчуванням);
// - функцію яка одержує деякий елемент матриці за індексами i та j;
// - визначити функції друку, додавання, множення, віднімання, які здійснюють ці арифметичні операції з даними цього класу;
// - визначити функції порівняння : більше, менше або рівно, які повертають true або false.
// У змінну стани встановлювати код помилки, коли не вистачає пам'яті, виходить за межі матриці. Передбачити можливість підрахунку числа об'єктів даного типу. Написати програму тестування всіх можливостей цього класу.

using namespace std;

void task_03()
{
	Matrix m1(3, 3, 5);
	m1.print();
	newLine();

	Matrix m2(3, 3, 2);
	m2.print();
	newLine();

	Matrix sum = m1 + m2;
	sum.print();
	newLine();

	cout << "Number of objects: " << Matrix::getObjectCount() << endl;
}
