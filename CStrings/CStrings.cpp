#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>


// void cout(char* text); // char* / char[]
// void cout(const char* text); // char*, const char*


void cout(const char* text)
{
	int i = 0;

	while (true) // while (text[i] != '\0')
	{
		if (text[i] == '\0')
		{
			break;
		}

		std::cout << text[i++];
	}
}


int foo(int& value1, int& value2, int& value3)
{
	value1 = 42; // a = 42
	value2 = 13; // b = 13
	value3 = 10; // c = 10
	
	return 1337;
}

int foo(int* value1, int* value2, int* value3)
{
	*value1 = 42; // a = 42
	*value2 = 13; // b = 13
	*value3 = 10; // c = 10

	return 1337;
}

int main()
{
	int a;
	int b;
	int c;

	int result = foo(&a, &b, &c);

	std::cout << "a = " << a << '\n';
	std::cout << "b = " << b << '\n';
	std::cout << "c = " << c << '\n';
	std::cout << "result = " << result << '\n';


	/*{
		wchar_t wc = 'Â'; // wide char

		std::wcout << sizeof(wchar_t) << '\n';
		std::wcout << wc << '\n';

		//char text[16]{'H', 'e', 'l', 'l', 'o'};

		char c = '\0';

		std::cout << (int)c << '\n';

		char garbage[4];
		char text[] = "Hello world"; // char*

		text[0] = 'h';

		const char* text2 = "Goodbye\0world !"; // const char*

		cout(text);
		cout(text2);
	}*/

	/*{
		char* text = new char[16];

		strcpy(text, "Hello world!");

		cout(text);

		delete[] text;
	}*/
}