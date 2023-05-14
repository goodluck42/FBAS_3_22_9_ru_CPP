#include <iostream>

union Response
{
	int code;
	char* message;
};

union Char
{
	char symbol;
	unsigned long code;
};

struct Time
{
	long h : 5;
	long m : 6;
	long s : 6;
};

void foo(double) {} // foo_double
void foo(int) {} // foo_int

void print_Char(union Char a_char, int variant)
{
	switch (variant)
	{
		case 1:
			std::cout << a_char.code << '\n';
			break;
		case 2:
			std::cout << a_char.symbol << '\n';
	}
}

struct Sample
{
	char a[9];
};

union Test
{
	Sample a; // double 8 of 8
	long b; 
};


union B
{
	double a;
	int b;
};

struct A
{
	B a;
	char c;
};

int main()
{
	std::cout << sizeof(Time) << '\n';
	std::cout << sizeof(Test) << '\n';
	std::cout << sizeof(A) << '\n';

	/*Char c{};

	c.code = 66;

	std::cout << c.symbol << '\n';
	std::cout << c.code << '\n';*/
}