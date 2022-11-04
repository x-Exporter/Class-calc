#include <iostream>

using namespace std;

class Calculator
{
public:
	double num1;
	double num2;

	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}

	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		return num1 / num2;
	}

	double divide_2_1()
	{
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		while (num1 == 0)
		{
			cout << "Неверный ввод!\n";
			cout << "Введите num1: ";
			cin >> num1;
		}
		this->num1 = num1;
		return true;
	}

	bool set_num2(double num2)
	{
		while (num2 == 0)
		{
			cout << "Неверный ввод!\n";
			cout << "Введите num2: ";
			cin >> num2;
		}
		this->num2 = num2;
		return true;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Calculator calc;
	while (true)
	{
		int num1;
		cout << "Введите num1: ";
		cin >> num1;
		calc.set_num1(num1);
		int num2;
		cout << "Введите num2: ";
		cin >> num2;
		calc.set_num2(num2);
		cout << "num1 + num2 = " << calc.add() << endl;
		cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
		cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
		cout << "num1 * num2 = " << calc.multiply() << endl;
		cout << "num1 / num2 = " << calc.divide_1_2() << endl;
		cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	}
}