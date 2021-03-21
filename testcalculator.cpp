#include <iostream>
#include <cassert>
#include "calculator.h";
#define assertm(exp, msg) assert(((void)msg, exp))

using namespace std;

void TestCalculator();

calculator obj;
void main() {
	TestCalculator();
}
void TestCalculator() {
	//testing plus
	float ans = obj.calc(100, '+', 1);
	float result = 101;
	assert(ans == result);
	cout << "\nTesting case 1 : "<<" Passed \n";

	ans = obj.calc(15.5, '+', 1.5);
	result = 17;
	assert(ans == result);
	cout << "\nTesting case 2 : " << " Passed \n";

	//testing minus
	ans = obj.calc(-2, '-', 5);
	result = -7;
	assert(ans == result);
	cout << "\nTesting case 3 : " << " Passed \n";

	ans = obj.calc(-50.5, '-', -5.5);
	result = -45;
	assert(ans == result);
	cout << "\nTesting case 4 : " << " Passed \n";

	//testing mutiply
	ans = obj.calc(4, '*', 2);
	result = 8;
	assert(ans == result);
	cout << "\nTesting case 5 : " << " Passed \n";

	ans = obj.calc(10.5, '*', 2.5);
	result = 26.25;
	assert(ans == result);
	cout << "\nTesting case 6 : " << " Passed \n";

	//testing division
	ans = obj.calc(10, '/', 2);
	result = 5;
	assert(ans == result);
	cout << "\nTesting case 7 : " << " Passed \n";

	ans = obj.calc(50, '/', 2);
	result = 25;
	assert(ans == result);
	cout << "\nTesting case 8 : " << " Passed \n";

}