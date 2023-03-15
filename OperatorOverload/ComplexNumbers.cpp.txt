#include<iostream>

#include"ComplexNumber.h"


int main()
{
	ComplexNumber CN(2, 3);
	CN.print();

	std::cout << CN << "\n";

	ComplexNumber CN2;

	std::cin >> CN2;
	std::cout << CN2 << "\n";

	ComplexNumber CN1(4, 5);

	std::cout << CN1 << "\n";

	std::cout << "(" << CN << ") + (" << CN1 << ") = ";
	std::cout << CN + CN1 << "\n";

	std::cout << "(" << CN << ") - (" << CN1 << ") = ";
	std::cout << CN - CN1 << "\n";


	std::cout << "(" << CN << ") * 4 = ";
	std::cout <<  CN * 4 << "\n";

	std::cout << "(" << CN << ") * (" << CN1 << ") = ";
	std::cout << CN * CN1 << "\n";

	std::cout << "(" << CN << ") / (" << CN1 << ") = ";
	std::cout << CN / CN1 << "\n";

	ComplexNumber CN3;
	CN3 = CN1;
	std::cout << CN3;

	if (CN3 == CN1)
		std::cout << "\nCN3 & CN1 are equal\n";
	else
		std::cout << "\nCN3 & CN1 are NOT equal\n";

	if (CN3 != CN)
		std::cout << "CN3 & CN are NOT equal\n";
	else
		std::cout << "CN3 & CN are equal\n";


	std::cout << ((CN + CN1) * CN3) / CN2;



	std::cout << "\n\n\n";
	return 0;
}