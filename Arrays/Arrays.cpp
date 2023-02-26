#include <iostream>
#include <random>

int main()
{
	/*{
		constexpr size_t len = 4;

		int arr[len]{ 42, 13, 10 };

		int arr2[]{ 10, 30, 42 };

		/*arr[0] = 42;
		arr[1] = 13;
		arr[2] = 10;

		std::cout << arr[0] << '\n';
		std::cout << arr[1] << '\n';
		std::cout << arr[2] << '\n';
	}*/

	std::cout << "--------------" << '\n';

	/*{
		const int len = 3;
		int arr[len];

		for (int i = 0; i < len; ++i)
		{
			std::cout << '[' << i << ']' << " = ";
			std::cin >> arr[i];
		}

		std::cout << "{ ";
		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i];

			if (i != len - 1)
			{
				std::cout << ", ";
			}
		}

		std::cout << " }" << '\n';
	}*/
	std::cout << "--------------" << '\n';
	/*{
		int arr[]{ 0.5, 20.9, 30.3, '@' };

		constexpr int len = sizeof(arr) / sizeof(int);

		std::cout << "len = " << len << '\n';

		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i] << '\n';
		}
	}*/


	// RANDOM INTS (C++ VARIANT)
	/*{
		std::uniform_int_distribution<int> range(1, 3);
		std::default_random_engine engine(time(nullptr));

		const int len = 5;

		int arr[len];

		for (int i = 0; i < len; ++i)
		{
			arr[i] = range(engine);
		}
		
		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	// RANDOM DOUBLES (C++ VARIANT)
	/*{
		std::uniform_real_distribution<double> range(2.1, 5.9);
		std::default_random_engine engine(time(nullptr));

		const int len = 5;

		double arr[len];

		for (int i = 0; i < len; ++i)
		{
			arr[i] = range(engine);
		}

		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	// RANDOM INTS (C VARIANT)

	{
		srand(time(nullptr));

		const int len = 5;

		int min = 50;
		int max = 100;

		int arr[len];

		for (int i = 0; i < len; ++i)
		{
			arr[i] = rand() % (max + 1 - min) + min;
		}

		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i] << '\n';
		}
	}
}