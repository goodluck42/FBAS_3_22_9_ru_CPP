#include <iostream>

int main()
{
	{
		constexpr size_t rows = 3;
		constexpr size_t columns = 4;

		int matrix[rows][columns]{
			// col	 0   1   2   3    // row
					{90, 10, 20, 42}, // 0
					{89, 18, 99, 78}, // 1
					{14, 13, 12, 11}, // 2
		};

	//	matrix[1][3] = 99;

	//	// std::cout << matrix[1][3];


	//	std::cout << matrix[1][4] << '\n';


	//	std::cout << "----------\n";
	//	for (int i = 0; i < columns; ++i)
	//	{
	//		std::cout << matrix[0][i] << '\n';
	//	}

	//	std::cout << "----------\n";

	//	for (int i = 0; i < rows; ++i)
	//	{
	//		std::cout << matrix[i][3] << '\n';
	//	}

	//	std::cout << "----------\n";

	//	for (int i = 0; i < rows; ++i)
	//	{
	//		std::cout << '[' << i << ']' << " = ";
	//		for (int j = 0; j < columns; ++j)
	//		{
	//			std::cout << matrix[i][j] << ' ';
	//		}

	//		std::cout << '\n';
	//	}
	//	std::cout << "----------\n";

	//	for (int i = 0; i < rows * columns; ++i)
	//	{
	//		std::cout << matrix[0][i] << ' ';
	//	}

	//	std::cout << "\n----------\n";
	//}

	constexpr int rows = 5;
	constexpr int cols = 5;

	int arr[rows][cols];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			arr[i][j] = rand() % 100;
		}
	}


	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cout << arr[i][j] << '\t';
		}

		std::cout << '\n';
	}

	std::cout << "-------------\n";


	char figure[5][5]{
		{' ', '*', '*', '*', ' '},
		{'*', '*', ' ', '*', '*'},
		{'*', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*'},
		{' ', '*', '*', '*', ' '},
	};

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			std::cout << figure[i][j] << ' ';
		}

		std::cout << '\n';
	}
}