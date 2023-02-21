#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>

enum class NumberType
{
	ZERO = 0,
	NEGATIVE = -1,
	POSITIVE = 1,
};

int main()
{
	// INCREMENTS & DECREMENTS
	// ++a; prefix increment
	/*int a = 2;
	int b = ++a;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	// a++; postfix increment
	/*int a = 2;
	int b = a++;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	// --a; prefix decrement

	/*int a = 2;
	int b = --a;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	// a--; postfix decrement

	/*int a = 2;
	int b = a--;

	std::cout << a << '\n';
	std::cout << b << '\n';*/


	//int a = 2; // a = 3
	//int result = a++ + ++a;
	//           2   +   4
	//               6

	//std::cout << result;

	//int a = 0;

	//while (a < 3)
	//{
	//    if (a == 1)
	//    {
	//        std::cout << "break triggered" << '\n';

	//        break;
	//    }

	//    /*if (a == 1)
	//    {
	//        ++a;
	//        continue;
	//    }*/

	//    

	//    std::cout << "Hello C++" << '\n';

	//    //a += 1; // инкремент курильщика/питониста

	//    //a++;

	//    ++a;
	//}

	// WHILE VS DO-WHILE 

	/*int i = 0;

	do
	{
		std::cout << "Hello do-while" << '\n';

		++i;
	} while (false);

	int k = 0;

	while (false)
	{
		std::cout << "while" << '\n';

		++k;
	}*/

	// -5
	// 2 + 5

	// TERNANRY OPERATOR

	// EXAMPLE 1
	// int value = 0;

	//                        true         false
	//std::cout << (value > 0 ? "positive" : "negative");

	/*if (value > 0)
	{
		std::cout << "postive";
	}
	else
	{
		std::cout << "negative";
	}*/

	// EXAMPLE 2

	/*int value = 5;

	std::cout << (value > 0 ? "positive" : (value < 0 ? "negative" : "zero"));

	if (value > 0)
	{
		std::cout << "postive";
	}
	else if (value < 0)
	{
		std::cout << "negative";
	}
	else
	{
		std::cout << "zero";
	}*/

	/*int value = 5;

	int result = value > 0 ? 1 : (value < 0 ? -1 : 0);

	NumberType type = (value > 0 ? NumberType::POSITIVE : (value < 0 ? NumberType::NEGATIVE : NumberType::ZERO));

	switch (type)
	{
		case NumberType::ZERO:
			std::cout << "Zero" << '\n';
			break;
		case NumberType::NEGATIVE:
			std::cout << "Negative" << '\n';
			break;
		case NumberType::POSITIVE:
			std::cout << "Positive" << '\n';
			break;
		default:
			break;
	}*/



	bool flag = true;

	while (flag)
	{
		//std::this_thread::sleep_for(std::chrono::milliseconds{ 3000 });
		Sleep(3000);
		system("cls");

		std::cout << "1. Task 1" << '\n';
		std::cout << "2. Task 2" << '\n';
		std::cout << "3. exit" << '\n';

		int op;

		std::cout << "Enter operation -> ";
		std::cin >> op;

		switch (op)
		{
			case 1:
			{
				std::cout << "Task 1 content" << '\n';

				break;
			}

			case 2:
			{
				std::cout << "Task 2 content" << '\n';

				break;
			}

			case 3:
			{
				flag = false;

				break;
			}

		}
	}



}