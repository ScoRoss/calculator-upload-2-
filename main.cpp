#include <iostream>
#include"Calculator.h"
void Log(const char* fuckitimgod){

	std::cout << fuckitimgod << "\n";
}

int main()
{
	Calculator calculatorobject;
	int result = calculatorobject.multiply(2,16);
	

	{
		std::cout << calculatorobject.division(4000.6, 3.0) << "\n";
		std::cout << calculatorobject.percent(3.14, 6) << "\n";
        std::cout << calculatorobject.percent(3.14, 100.2) << "\n";

		std::cout << calculatorobject.multiply(2, 5) << "\n";
		
	    std::cout <<  calculatorobject.sum(40, 85);
		std::cout << calculatorobject.subtraction(7, 3) << "\n";
	}

	Log("go fuck yourself!");
	system("pause");

	return EXIT_SUCCESS;
}

