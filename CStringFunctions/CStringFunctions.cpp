//#include <iostream>
//
//template<typename T> T add(T a, T b)
//{
//    return a + b;
//}
//
//template<typename T> T div(T a, T b)
//{
//    return a / b;
//}
//
//template<typename T> T mult(T a, T b)
//{
//    return a * b;
//}
//
//template<typename T> T subtraction(T a, T b)
//{
//    return a - b;
//}
//
//typedef double(*func)(double, double);
//
//
//template<typename T> T calc(T a, T b, T(*action)(T, T))
//{
//    return action(a, b);
//}
//
//int main()
//{
//    func arr[4]{ add, div, mult, subtraction };
//
//    int index;
//
//
//    std::cout << "1. Add" << '\n';
//    std::cout << "2. Divide" << '\n';
//    std::cout << "3. Multiplicate" << '\n';
//    std::cout << "4. Subtract" << '\n';
//
//    std::cin >> index;
//
//    double a;
//    double b;
//
//    std::cin >> a >> b;
//
//    std::cout << "result = " << calc(a, b, arr[index]);
//}

//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>


int stoi(char* str) // "42"
{
	return 42;
}


char* itos(int value) // 42
{
	char* result = new char[16] {};

	strcpy_s(result, 16, "42");

	return result;
}
size_t my_strlen(const char* str)
{
	size_t len{};

	while (str[len] != '\0')
	{
		++len;
	}

	return len;
}

int main()
{
	// strcpy / strcpy_s
	/* {
		char* text = new char[16] {};

		// strcpy(text, "Hello world");

		strcpy_s(text, 16, "Hello world. hey there");

		std::cout << text << '\n';

		delete[] text;
	}*/

	// strlen
	/* {
		typedef char* string;

		string text = new char[32] {};

		strcpy_s(text, 32, "Hello");

		std::cout << "strlen = " << strlen(text) << '\n';

		delete[] text;
	}*/

	// strcmp
	//{
	//	/*{
	//		const char* str1 = "Hello";
	//		const char* str2 = "Hello";

	//		std::cout << (void*)str1 << '\n';
	//		std::cout << (void*)str2 << '\n';

	//		if (str1 == str2)
	//		{
	//			std::cout << "equals" << '\n';
	//		}
	//		else
	//		{
//			std::cout << "not equals" << '\n';
//		}
//	}*/


//	char* str1 = new char[32] {};
//	char* str2 = new char[32] {};

//	strcpy_s(str1, 32, "baxana");
//	strcpy_s(str2, 32, "BaNaNa");

//	// -1 - str1 < str2
//	// 0 - str1 == str2
//	// 1 - str1 > str2

//	// _strcmpi - case insensitive

//	std::cout << strcmp(str1, str2) << '\n';


//	/*if (str1 == str2)
//	{
//		std::cout << "equals" << '\n';
//	}
//	else
//	{
//		std::cout << "not equals" << '\n';
//	}*/
// delete[] str1;
// delete[] str2;
//}

// strcat / strcat_s
/* {
	char* str1 = new char[32] {};
	char* str2 = new char[32] {};

	strcpy_s(str1, 32, "Hello");
	strcpy_s(str2, 32, "world");

	strcat_s(str1, 32, str2);

	std::cout << str1 << '\n';

	delete[] str1;
	delete[] str2;
}*/

// atol, strtol
/* {
	char* text = new char[16];

	strcpy_s(text, 16, "0xff");

	// long value = atol(text);

	char* pEnd;

	long value = strtol(text, &pEnd, 16);

	std::cout << value << '\n';

	delete[] text;
}*/

// strchr
//{
//	char* str = new char[32] {};
//	
//	strcpy_s(str, 32, "Hello my friend");
//	// strrchr (r - reverse)
//	char* match = strchr(str, 'l');

//	long long index = abs(str - match);

//	std::cout << index << '\n';
//	std::cout << str << '\n';

//	delete[] str;
//}

// strstr
/*{
	char* str = new char[32] {};

	strcpy_s(str, 32, "Hello my friend");

	char* match = strstr(str, "my");

	if (match != nullptr)
	{
		long long index = abs(str - match);
		std::cout << "index = " << index << '\n';

		std::cout << match << '\n';
	}

	delete[] str;
}*/

// strlwr / strupr
//{
//	char text[16] = "Hello!";

//	//_strupr_s(text, 16);
//	_strlwr_s(text, 16);

//	std::cout << text << '\n';
//}

	//{
	//	char value = 'a';

	//	value -= 32;
	//	//value += 32;

	//	std::cout << value;
	//}

	{
		char* result = itos(42);

		delete[] result;

		char text[8] = "42";

		int resul2 = stoi(text);
	}
}