#include <iostream> 

double add(double a, double b)
{
	std::cout << "double add(double a, double b) = ";
	
	double result = a + b;

	return result;
}

double add(double a, int b)
{
	std::cout << "double add(double a, int b) = ";

	double result = a + b;

	return result;
}

double add(int a, double b)
{
	std::cout << "double add(int a, double b) = ";

	double result = a + b;

	return result;
}

int add(int a, int b)
{
	std::cout << "int add(int a, int b) = ";

	int result = a + b;

	return result;
}

int add(int a, int b, int c)
{
	std::cout << "add(int a, int b, int c) = ";

	int result = a + b + c;

	return result;
}

short add(short a, short b)
{
	std::cout << "short add(short a, short b) = ";

	short result = a + b;

	return result;
}

void add(long a, long b)
{
	std::cout << a + b;
}

/////////


//void foo(int input)
//{
//	std::cout << "void foo()\n";
//}
//
//int foo(int input)
//{
//	std::cout << "int foo()\n";
//
//	return 0;
//}
// foo(5); // error



void foo(int a, int b = 50)
{
	std::cout << a << b << '\n';
}

void foo(int a)
{
	std::cout << a << '\n';
}

void print_array(int arr[], int size);
void print_array(double arr[], int size);
void print_array(int arr[][5], int rows, const int cols = 5);

int main()
{
	// foo(10); // error

	/*{


		std::cout << add(10, 15) << '\n';
		std::cout << add(10.5, 15.5) << '\n';
		std::cout << add(13.2, 42) << '\n';
		std::cout << add(42, 13.5) << '\n';

		add(20L, 42L);

		short a = 10;
		short b = 90;

		add(a, b);
	}*/

	/*{
		int arr[4]{ 10, 42, 15, 16 };

		print_array(arr, 4);

		double arr2[4]{ 20.1, 13.5, 78.2, 15.5 };

		print_array(arr2, 4);
	}*/

	int arr[3][5]
	{
		{10, 20, 30, 40, 42},
		{11, 21, 31, 41, 41},
		{12, 22, 33, 44, 45},
	};

	print_array(arr, 3);
}


void print_array(int arr[], int size)
{
	std::cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i];

		if (i != size - 1)
		{
			std::cout << ", ";
		}
	}
	std::cout << " }" << '\n';
}

void print_array(double arr[], int size)
{
	std::cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i];

		if (i != size - 1)
		{
			std::cout << ", ";
		}
	}
	std::cout << " }" << '\n';
}


void print_array(int arr[][5], int rows, const int cols)
{
	std::cout << "{\n";
	for (int i = 0; i < rows; ++i)
	{
		std::cout << "    ";
		print_array(arr[i], cols);
	}
	std::cout << "}";
}