#include <iostream>

namespace MySql
{
	void connect()
	{
		std::cout << "Connected to mysql" << '\n';
	}
}

namespace MSSql
{
	void connect()
	{
		std::cout << "Connected to mssql" << '\n';
	}
}

namespace MSSql
{
	void disconnect()
	{
		std::cout << "Disconnected from mssql" << '\n';
	}
}

//using namespace MSSql; // this is evil
//using namespace MySql;


int a = 42;

void foo()
{

}

int main()
{
	int a = 13;

	std::cout << ::a + a << '\n';

	int foo = 4;

	::foo();

	// MySql::connect();
	// MSSql::connect();

	//itos(123456789);
	/* {
		size_t len = 5;
		char** text_arr = new char* [len] {};

		for (size_t i = 0; i < len; ++i)
		{
			text_arr[i] = new char[32] {};
		}

		strcpy_s(text_arr[0], 32, "Hello world!");
		strcpy_s(text_arr[1], 32, "Arbidol");
		strcpy_s(text_arr[2], 32, "Ikram");
		strcpy_s(text_arr[3], 32, "Trapetsia");
		strcpy_s(text_arr[4], 32, "Perekachka");

		std::cout << text_arr[0][2] << '\n';
		std::cout << text_arr[1] << '\n';
		std::cout << text_arr[2] << '\n';
		std::cout << text_arr[3] << '\n';
		std::cout << text_arr[4] << '\n';

		for (size_t i = 0; i < len; ++i)
		{
			delete[] text_arr[i];
		}

		delete[] text_arr;
	}*/

	/* {
		int a = 42; // 4
		double b = 42.13; // 8 
		short c = 90; // 2
		bool d = 12; // 1

		void* const memory = operator new(15); // 0x12

		{
			char* anchor = (char*)memory;

			{
				int* anchor = (int*)memory;

				*anchor = a;
			}
			{
				anchor += sizeof(int);

				double* b_ptr = (double*)anchor;

				*b_ptr = b;
			}
			{
				anchor += sizeof(double);
				short* s_ptr = (short*)anchor;

				*s_ptr = c;
			}
			{
				anchor += sizeof(short);

				bool* b_ptr = (bool*)anchor;

				*b_ptr = d;
			}
		}

		char* anchor = (char*)memory;

		std::cout << *(int*)anchor << '\n';

		anchor += sizeof(int);

		std::cout << *(double*)anchor << '\n';

		anchor += sizeof(double);

		std::cout << *(short*)anchor << '\n';

		anchor += sizeof(short);

		std::cout << *(bool*)anchor << '\n';

		operator delete(memory);
	}*/
}


void itos(int a)
{
	// 123 % 10 = 3
	// 123 / 10 = 12
	// 12 % 10 = 2
	// 12 / 10 = 1
	// 1 % 10 = 
	// 1 / 10 = 0

	int count = 0;
	int copy = a;

	while (copy / 10 != 0)
	{
		std::cout << copy % 10 << '\n';

		copy /= 10;
		++count;
	}

	std::cout << copy;

	std::cout << "count = " << count + 1 << '\n';
}