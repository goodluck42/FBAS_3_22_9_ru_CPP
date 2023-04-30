#include "compute.h"
#include "mymath.h"
#include <iostream>

#define WIN64

void ShowMessage(const char* text)
{
// && || ! >, <, ==, !=, >=, <=

//#ifdef WIN64
#if defined(WIN64)
	std::cout << "Message from Windows: " << text << '\n';
#elif defined(LINUX)
	printf("Message from Linux: ");
	printf(text);
#else
	std::cout << "OS is not supported" << '\n';
#endif
}

#define MAX(a, b) ...

#define NUMBER 42

#if ...
void a(int);
void b(int);
void c(int);
#elif ...
void a(float);
void b(float);
void c(float);
#elif ...
void a(double);
void b(double);
void c(double);

#endif

int main()
{
	int a = NUMBER;

#undef NUMBER

	// std::cout << NUMBER; // ERROR

	std::cout << (a == 5 ? "a is 5" : "a is not 5");

	ShowMessage("Hello");

	// char* buffer = new char[16];
	// strcpy_s(buffer, 16, "Hello world");
	// strcpy(buffer, "Hello world");



	//print_sum(5, 2);

	return 0;
}