#include <iostream>

// PascalCaseSample
// camelCaseSample
// snake_case_sample
// kebab-case-sample
// Pascal_Snake_Case_Sample
// ...

///////// C VERSION
//enum MenuOption
//{
//	OPEN_FILE = 1,
//	SEND_FILE,
//	DELETE_FILE,
//	EXIT
//};
//
//int main()
//{
//	std::cout << "1. Open file" << '\n';
//	std::cout << "2. Send file" << '\n';
//	std::cout << "3. Delete file" << '\n';
//	std::cout << "4. Exit" << '\n';
//
//
//	int op; // 2
//
//	std::cout << "Enter operation -> ";
//	std::cin >> op;
//
//
//	switch (op)
//	{
//		case OPEN_FILE:
//		{
//			std::cout << "File opened" << '\n';
//
//			break;
//		}
//
//		case SEND_FILE:
//		{
//			std::cout << "File sent" << '\n';
//
//			break;
//		}
//
//		case DELETE_FILE:
//		{
//			std::cout << "File deleted" << '\n';
//
//			break;
//		}
//
//		case EXIT:
//		{
//			std::cout << "Program closed" << '\n';
//			
//			break;
//		}
//
//		default:
//		{
//			std::cout << "Incorrect command" << '\n';
//
//			break;
//		}
//	}
//}



///////// C++ VERSION


enum class MenuOption
{
	OPEN_FILE = 1,
	SEND_FILE,
	DELETE_FILE,
	EXIT
};

int main()
{
	system("color 0A");
	//std::cout << "color 0A" << '\n';

	std::cout << "1. Open file" << '\n';
	std::cout << "2. Send file" << '\n';
	std::cout << "3. Delete file" << '\n';
	std::cout << "4. Exit" << '\n';

	MenuOption option;

	{
		int op; // 2

		std::cout << "Enter operation -> ";
		std::cin >> op;

		option = (MenuOption)op;
	}

	switch (option)
	{
		case MenuOption::OPEN_FILE:
		{
			std::cout << "File opened" << '\n';

			break;
		}

		case MenuOption::SEND_FILE:
		{
			std::cout << "File sent" << '\n';

			break;
		}

		case MenuOption::DELETE_FILE:
		{
			std::cout << "File deleted" << '\n';

			break;
		}

		case MenuOption::EXIT:
		{
			std::cout << "Program closed" << '\n';

			break;
		}

		default:
		{
			std::cout << "Incorrect command" << '\n';

			break;
		}
	}
}