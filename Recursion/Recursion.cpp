#include <iostream>


void foo(int b)
{
	b++;
}

void foo(int b[])
{
	(b[0])++;
}

void b();
void c();

void a(int v)
{
	std::cout << "a" << '\n';
	b();
	std::cout << "A" << '\n';
}

void b()
{
	std::cout << "b" << '\n';
	c();
	std::cout << "B" << '\n';
}

void c()
{
	std::cout << "c" << '\n';
	std::cout << "C" << '\n';
}

long long factorial(int n) // n = 5 => 5 * 4 * 3 * 2 * 1
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return factorial(n - 1) * n;
}

int main()
{
	/*{
		const int rows = 3;
		const int cols = 3;


		int arr[rows][cols]
		{
			{11, 14, 17}, // 0
			{23, 73, 48}, // 1
			{12, 15, 91} // 2
		};
		for (int i = 0; i < rows; ++i) // O(n^3)
		{
			for (int j = 0; j < cols; ++j) // j = 0 -> 3
			{
				if (i == rows - 1) // i = 2
				{
					for (int k = 0; k < cols; ++k)
					{
						int temp = arr[0][k];

						arr[0][k] = arr[i][k];
						arr[i][k] = temp;
					}
				}
			}
		}

		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				std::cout << arr[i][j] << ' ';
			}

			std::cout << '\n';
		}
	}*/
	/*{
		int x = 1;

		foo(x);

		std::cout << x << '\n';

		int arr[3]{ 42, 12, 13 };

		foo(arr);

		std::cout << arr[0] << '\n';
	}*/
	/*int x = 42;
	a(x);
	*/

	int result = factorial(4);

	std::cout << result;
}