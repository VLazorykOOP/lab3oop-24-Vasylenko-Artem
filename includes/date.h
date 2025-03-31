#pragma once

#include <iostream>
#include <iomanip>

#include "console.h"
#include "taskManager.h"

// Створити клас типу - дата з полями : день(1 - 31), місяць(1 - 12), рік(ціле число).У класі визначити
// - конструктори(не менше двох);
// - функції - члени встановлення дня, місяця та року, функції встановлення полів класу повинні перевіряти коректність параметрів, що задаються;
// - функції - члени одержання дня, місяця та року;
// - дві функції - члени друку за шаблоном : “5 січня 2019 року” і “05.01.2019”. Написати програму тестування всіх можливостей цього класу.

using namespace std;

typedef struct Month
{
	short number;
	string name;
} Month;

class Date
{
private:
	int day;
	int month;
	int year;

	bool isLeapYear(int y);

	bool isValidDay(int d);
	bool isValidMonth(int m);
	bool isValidYear(int y);

public:
	Date() : day(1), month(1), year(2000) {}
	Date(int d, int m, int y);

	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void printFullDate() const;
	void printShortDate() const;
};