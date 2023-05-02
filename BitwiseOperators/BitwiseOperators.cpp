#include <iostream>


int A()
{
	std::cout << "A()" << '\n';
	return 1;
}

int B()
{
	std::cout << "B()" << '\n';
	return 1;
}

char* XOR_encode(const char* text, int key)
{
	size_t len = strlen(text);
	char* buffer = new char[len + 1] {};

	for (size_t i = 0; i < len; i++)
	{
		buffer[i] = text[i] ^ key;
	}

	return buffer;
}

char* XOR_decode(const char* text, int key)
{
	size_t len = strlen(text);
	char* buffer = new char[len + 1] {};

	for (size_t i = 0; i < len; i++)
	{
		buffer[i] = text[i] ^ key;
	}

	return buffer;
}


int main()
{

	// C, C++, Python, JS, TS, C# (ASP.NET, Winforms, WPF), MSSQL, React, HTML/CSS, LESS, Dapper, EF Core, NodeJS
	/*{
		int a = 42;
		int b = 13;

		if (A() & B())
		{
			std::cout << "OK" << '\n';
		}
		else
		{
			std::cout << "FAIL" << '\n';
		}
	}*/

	int a = 7821; // 00011110 10001101
	int b = 2715; // 00001010 10011011

	//std::cout << "a = " << a << '\n';
	//std::cout << "b = " << b << '\n';

	// | - bitwise OR
	/* {
		// 00011110 10001101
		// 00001010 10011011
		// |
		// 00011110 10011111
		int result = a | b;

		std::cout << "a | b = " << result << '\n';
	}*/

	// & - bitwise AND
	/*{
		// 00011110 10001101
		// 00001010 10011011
		// &
		// 00001010 10001001
		int result = a & b;

		std::cout << "a & b = " << result << '\n';
	}*/

	// ^ - XOR (исключающее ИЛИ)

	/* {
		// 00011110 10001101
		// 00001010 10011011
		// ^
		// 00010100 00010110

		int result = a ^ b;

		std::cout << "a ^ b = " << result << '\n';

		const int key = 25;
		char c = '7'; // 00110111

		// Шифровка
		// 00110111 - символ
		// ^
		// 00011001 - ключ
		// =
		// 00101110 - зашифрованный символ
		char encoded = c ^ key; // зашифрованный символ
		char decoded = encoded ^ key; // расшифрованный символ

		// Расшифровка
		// 00101110
		// ^
		// 00011001
		// =
		// 00110111

		std::cout << "initial value = " << c << '\n';
		std::cout << "encoded value = " << encoded << '\n';
	}*/

	// ~ inversion
	/* {
		unsigned int result = ~a;

		// 00000000 00000000 00011110 10001101
		// ~
		// 11111111 11111111 11100001 01110010

		std::cout << "~a = " << result << '\n';
	}*/

	// >> - right shift
	/*{
		short a = 100; // 01100100

		// 01100100
		// >> 1
		// 00110010

		short result = a >> 1;

		std::cout << "a >> 1 = " << result << '\n';
	}*/

	// << - left shift
	/*{
		short a = 100; // 01100100

		// 01100100
		// << 1
		//
		// 11001000
		// 0 + 0 + 0 + 8 + 0 + 0 + 64 + 128
		short result = a << 1;

		std::cout << "a << 1 = " << result << '\n';

		// 00000010
		// 00010000
		std::cout << (2 << 3) << '\n';
	}*/

	/*{
		const char* text = "Hello";

		char* encoded = XOR_encode(text, 90);

		std::cout << encoded << '\n';


		char* decoded = XOR_decode(encoded, 89);

		std::cout << decoded << '\n';

		delete[] encoded;
		delete[] decoded;
	}*/

	unsigned int value = 0;

	{
		// 00000000 00000000 00000000 00000000

		short a = 43;
		short b = 90;

		value |= a;

		// 00000000 00000000 00000000 00101010
		//                   00000000 00101010

		value <<= 16;

		// 00000000 00101010 00000000 01011010
		//                   00000000 01011010
		value |= b;
	}

	{
		std::cout << "short a = " << (short)(value >> 16) << '\n';
		std::cout << "short b = " << (short)value << '\n';
	}

}