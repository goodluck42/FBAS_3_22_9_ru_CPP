#include <iostream>

int sum(int a, int b)
{
	int result = a + b;

	return result;
}

void show_sum(const int a, int b = 10)
{
	int result = a + b;

	std::cout << result << '\n';
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

int main()
{
	/*{
		std::cout << std::boolalpha;

		bool res = sum(10, 20);
		int res2 = sum(10, 20);

		std::cout << res << '\n';
		std::cout << res2 << '\n';

		show_sum(20, 42);
		show_sum(13);
	}*/

	const int len = 6;

	int arr[len]{ 10, 42, 15, 13, 14, 90 };

	// std::cout << sizeof(arr) / sizeof(int);

	print_array(arr, len);

	const int len2 = 3;

	int arr2[len2]{ 10, 42, 11 };

	print_array(arr2, len2);
}