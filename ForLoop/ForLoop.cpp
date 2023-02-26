#include <iostream>
#include <Windows.h>
int main()
{
	// (section1;section2;section)
	/*for (int i = 0; i < 5; ++i)
	{
		std::cout << i << '\n';
	}*/


	/*int i = 0;

	while (i < 5)
	{
		std::cout << i << '\n';

		++i;
	}

	std::cout << i << '\n';*/

	/*char  i = 0;

	for (;true; ++i)
	{
		std::cout << (int)i << '\n';
		Sleep(50);
	}*/

	std::cout << std::boolalpha;

	int a{ 42 };
	bool b{};

	std::cout << a << '\n';
	std::cout << b << '\n';

	auto x = 3.14;

	for (size_t i = 5; i-- > 0;)
	{
		std::cout << i << '\n';
	}

	int i = 0;

	if (i == 5)
	{
		break;
	}

}