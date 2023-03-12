#include <iostream>



int add(int a, int b)
{
	int result = a + b;

	return result;
}


template<typename T>
T add(T a, T b)
{
	// T result{};
	T result = a + b;

	return result;
}

template<typename T>
T add(T a, T b, T c)
{
	T result = a + b;

	return result;
}

template<typename T, typename T2>
auto add(T a, T2 b)
{
	auto result = a + b;

	return result;
}


template<typename T> void print_array(T arr[], int size);

int main()
{
	//{
	//	add<int>(10, 20);
	//	add(10, 20);
	//	//std::cout << add<int>(10, 20) << '\n';
	//	//std::cout << add<float>(10.2f, 20.12f) << '\n';

	//	std::cout << add(20.5, 10);
	//}

	{
		int arr[3]{ 40, 42, 90 };
		double arr2[3]{ 90.5, 42.13, 17.11 };
		char arr3[3]{ '@', 'h', 'u' };

		print_array<int>(arr, 3);
		print_array<double>(arr2, 3);
		print_array<char>(arr3, 3);
	}
}

template<typename T> void print_array(T arr[], int size)
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