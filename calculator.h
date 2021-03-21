#ifndef calculator_h
#define calculator_h
#include <iostream>

using namespace std;

class calculator
{ //class object
public:
	void stmenu(); // fuction member
	void inputvalue();
	float calc(float number1, char op, float number2);
};
void calculator::stmenu()
{
	int menu;
	do
	{
		system("CLS");
		cout << "-------------------------\n";
		cout << "|\t calculator \t|\n";
		cout << "-------------------------\n";
		cout << "|\t1. calculator \t|\n";
		cout << "|\t2. Exit !!! \t|\n";
		cout << "-------------------------\n";
		cout << "Enter menu : ";
		cin >> menu;
		if (menu == 1)
		{
			inputvalue();
			break;
		}
	} while (menu != 2);
	{
		cout << "\tExit Program !!!\n";
		cout << "-------------------------\n";
		exit(0);
	}
}

void calculator::inputvalue()
{
	float number1, number2;
	float ans;
	char choice;
	char op;
	bool status = false;
	do
	{
		system("CLS");
		cout << "-------------------------\n";
		cout << "|\t calculator \t|\n";
		cout << "-------------------------\n";
		cout << "Enter number 1 : ";
		cin >> number1;
		cout << "\t+\n\t-\n\t*\n\t/\nSelect Operator : ";
		cin >> op;
		cout << "Enter number 2 : ";
		cin >> number2;
		cout << "-------------------------\n";
		switch (op)
		{
		case '+':
			cout << "\t" << number1 << " " << op << " " << number2 << " = " << calc(number1, op, number2) << endl; //ส่งค่าที่รับมาไปที่ func calc
			break;
		case '-':
			cout << "\t" << number1 << " " << op << " " << number2 << " = " << calc(number1, op, number2) << endl;
			break;
		case '*':
			cout << "\t" << number1 << " " << op << " " << number2 << " = " << calc(number1, op, number2) << endl;
			break;
		case '/':
			cout << "\t" << number1 << " " << op << " " << number2 << " = " << calc(number1, op, number2) << endl;
			break;
		default:
			cout << "\tTry Again Unknow Operator !! \n";
			break;
		}
		cout << "-------------------------\n";
		cout << "Continue Program ? (Y/N): ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			status = true;
		}
		else
		{
			status = false;
		}
	} while (choice != 'N' && choice != 'n');
	{
		if (status)
		{
			inputvalue();
		}
		else
		{
			cout << "\n\tExit Program !!!\n";
			cout << "-------------------------\n";
			exit(0);
		}
	}
}

float calculator::calc(float number1, char op, float number2)
{
	float ans;
	switch (op) // check operator
	{
	case '+':
		ans = number1 + number2;
		return ans; // คืนค่าที่ได้จากการคำนวน
		break;
	case '-':
		ans = number1 - number2;
		return ans;
		break;
	case '*':
		ans = number1 * number2;
		return ans;
		break;
	case '/':
		ans = number1 / number2;
		return ans;
		break;
	}
	return (0);
}
#endif
