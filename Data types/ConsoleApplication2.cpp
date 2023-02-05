// Single line comment

/*
  Multiline
  comment
*/

#include <iostream>

int main()
{
	// CTRL + K + C
	// CTRL + K + U
	/*std::cout << "Hello World!" << '\n';
	std::cout << "Hello C++" << 22;*/

	/*int value, value_2, value_3;

	std::cout << "Enter number -> ";
	std::cin >> value;
	std::cout << "value = " << value;*/

	// Data types

	// std::cout << sizeof(int);

	unsigned long long ullmax = ULLONG_MAX;

	std::cout << "ULLONG_MAX = " << ullmax << '\n';

	// [long long] 8 bytes

	//signed long long int llmax = LLONG_MAX;
	long long llmax = LLONG_MAX;
	long long llmin = LLONG_MIN;

	std::cout << "LLONG_MAX = " << llmax << '\n';
	std::cout << "LLONG_MIN = " << llmin << '\n';

	// [unsigned long] 4 bytes

	unsigned long ulmax = ULONG_MAX; // 4294967295

	std::cout << "ULONG_MAX = " << ulmax << '\n';

	// [long] 4 bytes

	// signed long int
	//signed long int lmax = LONG_MAX;
	long lmax = LONG_MAX; // 2147483647
	long lmin = LONG_MIN; // -2147483648

	std::cout << "LONG_MAX = " << lmax << '\n';
	std::cout << "LONG_MIN = " << lmin << '\n';

	// [int] 2 or 4 bytes
	
	int imax = INT_MAX; // 2147483647
	int imin = INT_MIN; // -2147483648

	std::cout << "INT_MAX = " << imax << '\n';
	std::cout << "INT_MIN = " << imin << '\n';

	// [unsigned short] 2 bytes

	unsigned short usmax = USHRT_MAX;

	std::cout << "USHRT_MAX = " << usmax << '\n';

	// [short] 2 bytes

	short smax = SHRT_MAX; // 32767
	short smin = SHRT_MIN; // -32768

	std::cout << "SHRT_MAX = " << smax << '\n';
	std::cout << "SHRT_MIN = " << smin << '\n';

	// arithmetic overflow
	// 1000 0000
	signed short test = 32769;

	std::cout << "test = " << test << '\n';

	// [char] 1 byte

	char cmax = CHAR_MAX; // 127
	char cmin = CHAR_MIN; // -128

	std::cout << "CHAR_MAX = " << (int)cmax << '\n';
	std::cout << "CHAR_MIN = " << (int)cmin << '\n';

	// [bool] 1 byte
	
	bool a = true;
	bool b = false;

	// [float] 4 bytes

	float fvalue = 13.2F;

	// 
	// ******* *
	// 1234566.9123
	// ****.****

	// [double] 8 bytes

	double dvalue = 42.13;
}