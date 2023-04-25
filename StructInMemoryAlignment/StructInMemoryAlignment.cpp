#include <iostream>
#include <Windows.h>

struct Object
{
	char a; // 1 of 4 *
	long b; // 4 of 4 *
	char c; // 1 of 4 *
};

struct Object1
{
	char a; // 1 of 4 *
	char c; // 2 of 4 +
	long b; // 4 of 4 *
};

struct Object2 // double arr[3]
{
	double b; // 8 of 8 *
	short a; // 2 of 8 *
	short c; // 4 of 8 +
	short x1; // 6 of 8 +
	short x2; // 8 of 8 +
};


struct Object3
{
	long a; // 4 of 8 *
	double b; // 8 of 8 *
	char c; // 1 of 8 *
	double d; // 8 of 8 *
	short x; // 2 of 8 *
	float x2; // 6 of 8 +
};

struct Object4
{
	short x; // 2 of 8 *
	long l; // 6 of 8 +
	short b; // 8 of 8 +
	double a; // 8 of 8 *
};

struct Inner
{
	double x;
	long y;
};

struct Object5 // 32b
{
	long a; // 4 of 16 *
	long b; // 8 of 16 +
	Inner test; // 16 of 16 + & 4 of 16 *
	long c; // 8 of 16 +
};


struct Object6
{
	double x; // 8 of 8 *
	long a; // 4 of 8 *
	long b; // 8 of 8 +
	long y; // 4 of 8 *
	long c; // 8 of 8 +
};

int main()
{
	std::cout << sizeof(Object5);
}