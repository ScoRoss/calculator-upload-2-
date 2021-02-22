#pragma once
class Calculator
{
public:
	Calculator();
	~Calculator();
	int sum(int parameter1, int parameter2); 
	int multiply(int parameter1, int parameter2);
	double division(double parameter1, double parameter2);
	int subtraction(int parameter1, int parameter2);
	double percent(double parameter1, double parameter2);
private:

	int i = 10; //0000 0000, 0000 0000, 0000 0000, 0000 1010
};

