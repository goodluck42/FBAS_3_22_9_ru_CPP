#include <iostream>

void foo(int)
{
	int as = 42;

	return;
}

enum class ProgramMode
{
	None,
	Debug,
	Release
};

int value; // 0 // .bss
bool bvalue; // false // .bss
int* ptr; // nullptr // .bss
bool avalue = true; // .data

void foo()
{
	static int counter; // .bss
	static int counter2 = 42; // .data
	int counter3 = 90; // stack
	std::cout << "call " << counter << '\n';

	++counter;
}
int main(int argc, char* argv[])
{
	{
		//std::cout << value << '\n';
		foo();
		foo();
		foo();
	}
	//{
	//    ProgramMode mode = ProgramMode::None;

	//    for (int i = 0; i < argc; ++i)
	//    {
	//        if (strcmp(argv[i], "/debug") == 0)
	//        {
	//            mode = ProgramMode::Debug;

	//        }

	//        if (strcmp(argv[i], "/release") == 0)
	//        {
	//            mode = ProgramMode::Release;
	//        }
	//        //std::cout << argv[i] << '\n';
	//    }


	//    switch (mode)
	//    {
	//        case ProgramMode::None:
	//            break;
	//        case ProgramMode::Debug:
	//            std::cout << "Debug mode enabled\n";
	//            break;
	//        case ProgramMode::Release:
	//            std::cout << "Release mode enabled\n";
	//            break;
	//        default:
	//            break;
	//    }

	//    system("pause");
	//}

	/*int a = 42;

	foo(a);*/

	//int* ptr = new int{ 42 }; // M.Hadi 21

	//std::cout << *ptr << '\n'; // 42


	//{
	//    int len;

	//    std::cin >> len; // len = 5
	//    //double data[4]; // in stack
	//    double* data = new double[len] {}; // in heap

	//    delete[] data;
	//}

	// 1234 -> 1 2 3 4
	// digits[0] == 1 && digit[1] == 2 ...
	//int digits[4]{ }; // 0 0 0 0

	// fill_array:
	// if end of array: (i == 4)
	// return
	// 'value' = rand() % 10;
	// for (check for duplicates)
	// if no duplicate:
	// // add 'value' to digits[i]
	// // increment inserted index (i++)
	// // call fill_array;
	// if there is:
	// // call fill_array;

	{
		
		{
			int a = 42;
			int b = 13;

			int* const ptr = &a;

			// ptr = &b; // error
			*ptr = 10; // ok
		}

		{
			int a = 42;
			int b = 13;

			const int* ptr = &a;

			ptr = &b;
			// *ptr = 10; // error

			// ptr = &b; // error
			// *ptr = 10; // ok
		}

		{
			int a = 42;
			int b = 13;

			const int* const ptr = &a;

			ptr = &b; // error
			*ptr = 10; // error
		}

	}

}
