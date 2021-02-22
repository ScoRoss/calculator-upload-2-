#include"Calculator.h"
#include <iostream>
#include<windows.h>
Calculator::Calculator()
{
	//initialization "usually"
	std::cout << "starts here\n";
	std::cout << (i >> 1) << "\n";
	
	
}

Calculator::~Calculator()
{
}

int Calculator::sum(int parameter1, int parameter2)
{

	int result = parameter1 + parameter2;
	return result;
}

int Calculator::multiply(int parameter1, int parameter2)
{
	int nothing = parameter1 * parameter2;
	return nothing;
}

double Calculator::division(double parameter1, double parameter2)
{
	double result = parameter1 / parameter2;
	return result;
}

int Calculator::subtraction(int parameter1, int parameter2)
{
	int result = parameter1 - parameter2;


	return result;
}

double Calculator::percent(double parameter1, double parameter2)
{
	double = parameter1 % parameter2;
	return result;
}
