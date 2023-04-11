#include <iostream>

const size_t ROWS = 3;
const size_t COLS = 3;

// O - -1
// X - 1
// . - 0

enum class Cell
{
	EMPTY,
	CROSS,
	CIRCLE,
};

enum class Player
{
	FIRST,
	SECOND
};

enum class GameState
{
	FIRST_WIN,
	SECOND_WIN,
	DRAW,
	CONTINUE
};

Cell** create_matrix()
{
	Cell** matrix = new Cell*[ROWS] {};

	for (size_t i = 0; i < ROWS; ++i)
	{
		// matrix[i] - Cell*

		matrix[i] = new Cell[COLS]{};
	}

	return matrix;
}

void free_matrix(Cell** matrix)
{
	for (size_t i = 0; i < ROWS; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
void render(Cell** matrix)
{
	std::cout << "   ";
	for (size_t i = 0; i < ROWS; ++i)
	{
		std::cout << ' ' << i + 1 << ' ';
	}

	std::cout << '\n';

	for (size_t i = 0; i < ROWS; ++i)
	{
		std::cout << ' ' << i + 1 << ' ';

		for (size_t j = 0; j < COLS; ++j)
		{
			std::cout << '[';

			switch (matrix[i][j])
			{
				case Cell::EMPTY:
				{
					std::cout << ' ';

					break;
				}
				case Cell::CROSS:
				{
					std::cout << 'X';

					break;
				}
				
				case Cell::CIRCLE:
				{
					std::cout << 'O';
				}
			}

			std::cout << ']';
		}

		std::cout << '\n';
	}
}
bool set_Cell(Cell** matrix, Player player, size_t x, size_t y)
{
	if (x >= ROWS || y >= COLS || matrix[x][y] != Cell::EMPTY)
	{
		return false;
	}

	switch (player)
	{
		case Player::FIRST:
		{
			matrix[x][y] = Cell::CROSS;
			break;
		}
		case Player::SECOND:
		{
			matrix[x][y] = Cell::CIRCLE;
		}
	}

	return true;
}

GameState get_GameState(Cell** matrix)
{
	// Rows
	for (size_t i = 0; i < ROWS; ++i)
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t j = 0; j < COLS; j++)
		{
			if (matrix[i][j] == Cell::EMPTY)
			{
				break;
			}

			if (matrix[i][j] == Cell::CROSS)
			{
				++first_counter;
			}
			
			if (matrix[i][j] == Cell::CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == ROWS)
		{
			return GameState::FIRST_WIN;
		}

		if (second_counter == ROWS)
		{
			return GameState::SECOND_WIN;
		}
	}

	// Cols
	for (size_t i = 0; i < COLS; ++i)
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t j = 0; j < ROWS; ++j)
		{
			if (matrix[j][i] == Cell::EMPTY)
			{
				break;
			}
			
			if (matrix[j][i] == Cell::CROSS)
			{
				++first_counter;
			}
			
			if (matrix[j][i] == Cell::CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == COLS)
		{
			return GameState::FIRST_WIN;
		}

		if (second_counter == COLS)
		{
			return GameState::SECOND_WIN;
		}
	}

	// Primary diagonal
	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t i = 0; i < ROWS; ++i)
		{
			if (matrix[i][i] == Cell::EMPTY)
			{
				break;
			}

			if (matrix[i][i] == Cell::CROSS)
			{
				++first_counter;
			}
			
			if (matrix[i][i] == Cell::CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == ROWS)
		{
			return GameState::FIRST_WIN;
		}

		if (second_counter == ROWS)
		{
			return GameState::SECOND_WIN;
		}
	}

	// Secondary diagonal

	{
		size_t first_counter = 0;
		size_t second_counter = 0;

		for (size_t i = 0, j = COLS; i < ROWS && j-- > 0; ++i)
		{
			if (matrix[i][j] == Cell::EMPTY)
			{
				break;
			}

			if (matrix[i][j] == Cell::CROSS)
			{
				++first_counter;
			}

			if (matrix[i][j] == Cell::CIRCLE)
			{
				++second_counter;
			}
		}

		if (first_counter == ROWS)
		{
			return GameState::FIRST_WIN;
		}

		if (second_counter == ROWS)
		{
			return GameState::SECOND_WIN;
		}
	}

	// Continue

	for (size_t i = 0; i < ROWS; ++i)
	{
		for (size_t j = 0; j < COLS; ++j)
		{
			if (matrix[i][j] == Cell::EMPTY)
			{
				return GameState::CONTINUE;
			}
		}
	}

	return GameState::DRAW;
}

//               i  j
// [ ][ ][1] // [0][2]
// [ ][2][ ] // [1][1]
// [3][ ][ ] // [2][0]


void run()
{
	Cell** matrix = create_matrix();
	Player player = Player::FIRST;
	bool flag = true;

	while (flag)
	{
		system("cls");
		render(matrix);

		switch (player)
		{
			case Player::FIRST:
				std::cout << "First player (X):" << '\n';
				break;
			case Player::SECOND:
				std::cout << "Second player (O):" << '\n';
				break;
			default:
				break;
		}

		size_t x;
		size_t y;

		std::cout << "Enter x -> ";
		std::cin >> x;
		std::cout << "Enter y -> ";
		std::cin >> y;

		if (!set_Cell(matrix, player, x - 1, y - 1))
		{
			std::cout << "Incorrect input!" << '\n';
			system("cls");

			continue;
		}

		GameState state = get_GameState(matrix);

		switch (state)
		{
			case GameState::FIRST_WIN:
				system("cls");
				render(matrix);
				std::cout << "First player win!" << '\n';
				flag = false;
				break;
			case GameState::SECOND_WIN:
				system("cls");
				render(matrix);
				std::cout << "Second player win!" << '\n';
				flag = false;
				break;
			case GameState::DRAW:
				system("cls");
				render(matrix);
				std::cout << "Draw!" << '\n';
				flag = false;
				break;
		}

		if (player == Player::FIRST)
		{
			player = Player::SECOND;
		}
		else
		{
			player = Player::FIRST;
		}

		
	}

	free_matrix(matrix);
}

int main()
{
	run();
	

	//size_t len;

	//std::cin >> len;

	//int* arr1 = createArray(len); // 0x42
	//int* arr2 = createArray(3); // 0x16
	//int* arr3 = createArray(2); // 0x90
	//int* arr4 = createArray(4); // 0x112

	//arr1[0] = 1;

	//// md_array = { 0x42, 0x16, 0x90 }
	//int** md_array = new int* [3] { arr1, arr2, arr3 };

	//int** new_md_array = new int* [4] {};

	//for (size_t i = 0; i < 3; ++i)
	//{
	//	new_md_array[i] = md_array[i];
	//}

	//// new_md_array = { 0x42, 0x16, 0x90, 0x112 }

	// new_md_array[3] = arr4;

	// new_md_array = { 0x42, 0x16, 0x90, 0x0 }

	return 0;
}