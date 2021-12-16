#include <iostream>
#include <conio.h>
#include <fun.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, b;

	cout << "Калькулятор" << endl;
	cout << "Введите первое значение" << endl;
	cin >> a;
	cout << "Введите второе значение" << endl;
	cin >> b;
	system("cls");

	cout << "Выберите математическую операцию" << endl;
	"1. Сложение" << endl;
	"2. Вычитание" << endl;
	"3. Умножение" << endl;
	"4. Деление" << endl;

	switch (_getch())
	{
	case 1:
		cout << "Функция в разработке" << endl;
		break;
	case 2:
		cout << "Функция в разработке" << endl;
		break;
	case 3:
		cout << "Функция в разработке" << endl;
		break;
	case 4:
		cout << "Функция в разработке" << endl;
		break;

	default:
		cout << "Ошибка! Неверный ввод!" << endl;
		break;
	}

}