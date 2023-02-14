#include <iostream>

int main()
{
	// + - / * %

	// >= <= < > == !=

	// = += -= /= *= %=

	int a;

	std::cin >> a;

	if (a > 0)
	{
		/*int a = 13;

		std::cout << a << '\n';*/

		std::cout << "a > 0" << '\n';
	}
	else if (a == 0)
	{
		std::cout << "a == 0" << '\n';
	}
	else
	{
		std::cout << "a < 0" << '\n';
	}

	std::cout << a << '\n';

	// and - &&
	// or - ||
	// not - !

	int x1 = -42;
	int x2 = 10;

	if (x1 > 0 && x1 % 2 == 0)
	{
		std::cout << "x1 is positive and even" << '\n';
	}

	if (x2 % 2 != 0 || x1 > 0)
	{
		std::cout << "x2 is maybe odd and x1 is maybe positive" << '\n';
	}

	if ( !(x1 > 0) ) // x1 <= 0
	{
		std::cout << "x1 is negative" << '\n';
	}

	if (1 && '0') // \0
	{
		std::cout << "OK" << '\n';
	}
	else
	{
		std::cout << "NOT OK" << '\n';
	}
}