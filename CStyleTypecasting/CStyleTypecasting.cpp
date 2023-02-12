#include <iostream>

int main()
{
	// + - / * %

	//long a = 20;
	//long b = 3;
	//long result = a / b;
	//
	////std::cout << "\\n";
	//std::cout << "a / b = " << result << '\n';
	//std::cout << "a % b = " << a % b << '\n';
	// print result data type
	//std::cout << typeid(result).name();

	////////////////////////////

	// float - 4 bytes
	// double - 8 bytes
	// float & double

	//int a = 20;
	//double b = 3;

	//int result = a / b;

	//std::cout << result; // type = double

	//short a = 42;
	//long long b = 3;
	//long long result = a + b;

	//std::cout << result; // type = long long

	/*long a = 0;
	float b = 5;

	std::cout << a / b;*/

	// long / float => float
	// long long / float => float
	// short + long long => long long
	// char / bool => int
	/////////////////////////////////
	//char a = '@';
	//bool b = true;


	//std::cout << a << '\n';
	//std::cout << a / b; // type = int



	//////////////////


	/*char a = 64;
	double b = 2.5;

	std::cout << a / b;*/


	// LITERALS

	//std::cout << typeid("123").name();

	//const char* str = "Hello C++";
	//bool x1 = false;
	//char c = '#';
	//short s = 42; // no literal
	//int a = 42;
	//unsigned int ua = 42U;
	//long b = 42L;
	//unsigned long ub = 42UL;

	//long long c = 42LL;
	//unsigned long long uc = 42ULL;

	//float d = 2.28F;
	//double e = 2.28;

	/////////////////
	// IMPLICIT = неявное
	// EXPLICIT = явное

	// Implicit type conversions

	//int a = 3.2F;
	//bool b = 1337;

	//// 00001101 = -13
	//// 00000001 = true

	//// 00000000 = 0
	//// 00000000 = false
	//std::cout << std::boolalpha;

	//std::cout << a << '\n';
	//std::cout << b << '\n';


	//char c = 64;
	//long x1 = 42L;
	//double x2 = 4.;
	//double result = x1 / x2;
	//// stoi
	//std::cout << result;

	// Explicit type conversions

	int a = 42;
	int b = 4;

	std::cout << a / (float)b << '\n';
	std::cout << a / b << '\n';
}
