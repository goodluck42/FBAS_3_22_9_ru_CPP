#include <iostream>
#include <random>


int a; // .bss
int b = 42; // .data

// .cmd
// stack 
// heap
// .bss
// .data
// .code

void foo()
{
	//static int a = 10; // .data
	static int a; // .bss

	std::cout << a << '\n';

	a += 10;
}

/// BULLS & COWS
const int array_len = 4;

std::default_random_engine engine(time(nullptr));
std::uniform_int_distribution<int> range(0, 9);


// {9, 3, 1, 7}
void fill_array(int arr[array_len], int index = 0)
{
	if (index == 4)
	{
		return;
	}

	int random = range(engine);

	if (random == 0 && index == 0)
	{
		fill_array(arr, index);

		return;
	}

	for (int i = 0; i < array_len; ++i)
	{
		if (arr[i] == random)
		{
			fill_array(arr, index);

			return;
		}
	}

	arr[index] = random;

	fill_array(arr, index + 1);
}

int convert_from_array(int arr[array_len])
{
	int result = 0;
	int rank = pow(10, array_len - 1);

	for (int i = 0; i < array_len; ++i)
	{
		result += rank * arr[i];

		rank /= 10;
	}

	return result;
}

/////////

// { 10, 20, 42 }
// [10, 20, 42]
// (10, 20, 42)
// 10, 20, 42
// ~10, 20, 30~
void print(int arr[], int len, void (*print_style)(bool) = nullptr)
{
	if (print_style != nullptr)
	{
		print_style(true);
	}

	for (int i = 0; i < len; ++i)
	{
		std::cout << arr[i];

		if (i != len - 1)
		{
			std::cout << ", ";
		}
	}

	if (print_style != nullptr)
	{
		print_style(false);
	}

	std::cout << '\n';
}

void print_brackets(bool isOpen)
{
	std::cout << (isOpen ? "{ " : " }");

	/*if (isOpen)
	{
		std::cout << "{ ";

		return;
	}

	std::cout << " }";*/
}

void print_square_brackets(bool isOpen)
{
	if (isOpen)
	{
		std::cout << "[";

		return;
	}

	std::cout << "]";
}

void print_round_brackets(bool isOpen)
{
	if (isOpen)
	{
		std::cout << "(";

		return;
	}

	std::cout << ")";
}

void print_tilda(bool)
{
	std::cout << "~";
}

void A(int a)
{
	std::cout << "A" << a << '\n';
}

void B(int b)
{
	std::cout << "B" << b << '\n';
}

void C(int c)
{
	std::cout << "C" << c << '\n';
}

typedef long int32;
typedef unsigned long long uint64;
typedef long* int32_ptr;
typedef void (*func_ptr)(int);

int main(int argc, char* argv[])
{
	uint64 value = 42ULL;

	int32 a = 42;
	int32_ptr x2 = &a;

	/*A(5);
	B(42);*/
	func_ptr ptr = A; // void (*ptr)(int);

	ptr(5);

	ptr = B;

	ptr(42);

	ptr = C;

	int arr[4]{ 10, 20, 30, 42 };
	func_ptr func_arr[4] { A, B, C, A }; // void(*func_arr[4])(int)

	for (int i = 0; i < 4; ++i)
	{
		func_arr[i](10);
		//*(func_arr + i)
	}

	// std::cout << sizeof(func_ptr);


	int arr[3]{ 10, 20, 42 };

	print(arr, 3, print_brackets);
	print(arr, 3, print_square_brackets);
	print(arr, 3, print_round_brackets);

	print(arr, 3, print_tilda);




	/*int a = 42;
	int* ptr = &a;

	delete ptr;*/

	//{
	//	int arr[3]{ 11, 22, 33 };

	//	std::cout << *arr << '\n';

	//	short* data = new short[3] { 10, 20, 30 };

	//	std::cout << *data << '\n';
	//	std::cout << 0[data] << '\n'; // data[0]
	//	std::cout << data[1] << '\n'; // data[1]
	//	std::cout << *(data + 2) << '\n'; // data[2]

	//	delete[] data;
	//}

}

int Action(...ptr)
{
	return ptr(...);
}