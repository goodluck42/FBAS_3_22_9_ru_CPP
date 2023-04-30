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



int main()
{
	ShowMessage("Hello");

	// char* buffer = new char[16];
	// strcpy_s(buffer, 16, "Hello world");
	// strcpy(buffer, "Hello world");



	//print_sum(5, 2);

	return 0;
}