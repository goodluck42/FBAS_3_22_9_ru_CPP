#include <iostream>
#include <random>

/*{
		//char x = '5'; // 53

	//int digit = x - '0';

	//std::cout << "digit = " << digit << '\n';

		const char* number = "1337";
		size_t len = strlen(number);

		//int* arr = new int[len];

		for (size_t i = 0; i < len; ++i)
		{
			char c = number[i];

			int digit = c - '0';

			std::cout << "digit = " << digit << '\n';
		}
	}*/

void print(int* arr, size_t len)
{
	std::cout << '[';

	for (size_t i = 0; i < len; ++i)
	{
		std::cout << arr[i];

		if (i != len - 1)
		{
			std::cout << ", ";
		}
	}

	std::cout << ']' << '\n';
}

void print(int** matrix, size_t rows, size_t cols)
{
	std::cout << '[' << '\n';

	for (size_t i = 0; i < rows; ++i)
	{
		std::cout << "    ";
		print(matrix[i], cols);
	}

	std::cout << ']' << '\n';
}

void print(int** matrix, size_t rows, size_t* sizes)
{
	std::cout << '[' << '\n';

	for (size_t i = 0; i < rows; ++i)
	{
		std::cout << "    ";
		print(matrix[i], sizes[i]);
	}

	std::cout << ']' << '\n';
}

void foo(int** data)
{
	*data = new int{ 42 };
}

void free_md_array(int** arr, size_t rows)
{
	for (size_t i = 0; i < rows; ++i)
	{
		delete[] arr[i];
	}

	delete[] arr;
}

int** create_md_array(size_t rows, size_t cols)
{
	int** matrix = new int* [rows] {};

	for (size_t i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols] {};
	}

	return matrix;
}

std::default_random_engine engine;

void fill_md_array(int** arr, size_t rows, size_t* sizes)
{
	std::uniform_int_distribution<int> range(10, 99);

	for (size_t i = 0; i < rows; ++i)
	{
		for (size_t j = 0; j < sizes[i]; ++j)
		{
			arr[i][j] = range(engine);
		}
	}
}

int main()
{
	/*{
		int* a = new int{ 13 };

		foo(&a);

		std::cout << *a << '\n';
	}*/
	/*{
		int a = 42;
		int* ptr = &a;
		int** ptr_2 = &ptr;

		std::cout << **ptr_2 << '\n';
		std::cout << &a << '\n';
	}*/
	/* {
		size_t rows = 3;
		size_t cols = 2;


		// int** matrix = create_md_array(rows, cols);
		int** matrix = new int* [rows] {}; // 24 bytes

		//matrix[0] = new int[cols]; // row1
		//matrix[1] = new int[cols]; // row2 
		//matrix[2] = new int[cols]; // row3

		for (size_t i = 0; i < rows; ++i)
		{
			matrix[i] = new int[cols] {};
		}



		// row1
		matrix[0][0] = 42;
		matrix[0][1] = 13;

		// row2
		matrix[1][0] = 10;
		matrix[1][1] = 20; // std::cout << *(*(matrix + 1) + 1);

		// row3
		matrix[2][0] = 44;
		matrix[2][1] = 55;


		print(matrix, rows, cols);

		//delete[] matrix[0]; // row1
		//delete[] matrix[1]; // row2 
		//delete[] matrix[2]; // row3

		// free_md_array(matrix, rows);

		for (size_t i = 0; i < rows; ++i)
		{
			delete[] matrix[i];
		}

		delete[] matrix;
	}*/


	{
		size_t rows;

		std::cout << "Enter rows -> ";
		std::cin >> rows;

		int** matrix = new int* [rows] {};

		size_t* sizes = new size_t[rows]{};


		for (size_t i = 0; i < rows; ++i)
		{
			size_t cols;

			std::cout << "Enter cols for row" << i + 1 << " -> ";
			std::cin >> cols;

			matrix[i] = new int[cols] {};
			sizes[i] = cols;
		}


		fill_md_array(matrix, rows, sizes);
		print(matrix, rows, sizes);

		delete[] sizes;
		free_md_array(matrix, rows);
	}
}