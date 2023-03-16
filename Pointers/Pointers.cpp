#include <iostream>

template<typename T> void foo(T* value1, T* value2)
{

}


void foo(int* x)
{
	*x = 90;

	/*std::cout << "addr of x (foo)" << &x << '\n';
	std::cout << "foo() => " << x << '\n';*/
}

int main()
{
	{
		int* a = new int{ 42 };
		int* b = new int{ 13 };

		std::cout << *a * *b << '\n';

		delete a;
		delete b;
	}
	//{
	//	int v = 42;
	//	int* ptr = &v; // int

	//	foo(ptr);

	//	std::cout << v << '\n';

	//	//std::cout << "addr of x (main)" << &ptr << '\n';
	//	//std::cout << "main() => " << ptr << '\n';
	//}

	// x86 - 4b
	// x64 - 8b

	//{
	//	// 0x1fffx23

	//	while (true)
	//	{
	//		int* ptr = new int;

	//		*ptr = 42; // dereference

	//		//std::cout << *ptr;

	//		delete ptr;
	//	}
	//	
	//}

	/*{
		int len;

		std::cin >> len;

		int* arr = new int[len] {};

		for (int i = 0; i < len; ++i)
		{
			std::cout << "Element " << i << " => ";
			std::cin >> arr[i];
		}

		std::cout << '\n';

		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i] << ' ';
		}

		std::cout << '\n';

		delete[] arr;
	}*/

	//{
	//	short* arr = new short[3] { 90, 42, 80 }; // arr = 0x90

	//	std::cout << *arr << '\n'; // derefence

	//	short* elem = arr + 1; // 0x90 + (1 * 2) = 0x92

	//	std::cout << *elem << '\n';
	//	std::cout << "--------\n";
	//	std::cout << *(arr + 0) << '\n'; // arr[0]
	//	std::cout << *(arr + 1) << '\n'; // arr[1]
	//	std::cout << *(2 + arr) << '\n'; // arr[2]
	//	std::cout << "??? = " << 2[arr] << '\n';
	//	std::cout << "VALUES:\n";

	//	for (int i = 0; i < 3; ++i)
	//	{
	//		*(arr + i) *= 2; // arr[i]

	//		std::cout << *(arr + i) << '\n';
	//	}

	//	delete[] arr;
	//}
}