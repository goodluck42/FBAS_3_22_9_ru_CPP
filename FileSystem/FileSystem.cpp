#include <iostream>
#include <stdio.h>


const char* FILE_NAME = "persons.bin";

struct Person
{
	char name[32];
	int age;
};

bool write_Person(Person& person)
{
	FILE* file = nullptr;

	fopen_s(&file, FILE_NAME, "a");

	if (file != nullptr)
	{
		char* data = (char*)(&person); // MAGIC TRICK

		fwrite(data, sizeof(char), sizeof(Person), file);

		fclose(file);

		return true;
	}

	return false;
}

Person* read_Persons()
{
	FILE* file = nullptr;

	Person* persons = new Person[6]{};

	fopen_s(&file, FILE_NAME, "r");

	if (file != nullptr)
	{
		char* buffer = new char[sizeof(Person)] {};

		size_t i = 0;

		while (true)
		{
			if (fread(buffer, sizeof(char), sizeof(Person), file) == 0)
			{
				break;
			}

			Person* read_person = (Person*)(buffer);

			strcpy_s(persons[i].name, sizeof(Person::name), read_person->name);

			persons[i].age = read_person->age;

			++i;
		}

		delete[] buffer;

		fclose(file);
	}

	return persons;
}


int main(int argc, char** argv)
{
	//Person p1{ "StASS", 19 };

	//write_Person(p1);



	Person* persons = read_Persons();

	std::cout << persons[0].name << '\n';
	std::cout << persons[1].name << '\n';
	std::cout << persons[2].name << '\n';

	delete[] persons;

	// flags:
	// w - write (creates file if not exists) with truncate
	// r - read
	// a - append
	// w+ - write & read
	// r+ - read & write
	// a+ - read & append


	//{
	//	FILE* file = nullptr;

	//	fopen_s(&file, "data.txt", "r+");

	//	if (file != nullptr)
	//	{
	//		//char symbol1 = fgetc(file);
	//		//char symbol2 = fgetc(file);

	//		//std::cout << symbol1 << '\n';
	//		//std::cout << symbol2 << '\n';

	//		// read all file using fgetc and while
	//		/*char c;

	//		while ((c = fgetc(file)) != EOF)
	//		{
	//		    std::cout << c;
	//		}*/

	//		// read all file using fgetc and while (second variant)
	//		/*while (true)
	//		{
	//			char c = fgetc(file);

	//			if (c == EOF)
	//			{
	//				break;
	//			}

	//			std::cout << c;
	//		}*/
	//		

	//		// read all lines
	//		/*char* buffer = new char[32] {};

	//		while (true)
	//		{
	//			char* read_text = fgets(buffer, 32, file);

	//			if (read_text == nullptr)
	//			{
	//				break;
	//			}

	//			std::cout << read_text << '\n';
	//		}


	//		delete[] buffer;*/

	//		fgetc(file);
	//		fgetc(file);
	//		fgetc(file);
	//		
	//		fpos_t position;

	//		fgetpos(file, &position);

	//		std::cout << position;

	//		// ---------------------------

	//		fpos_t new_position = 6;

	//		fsetpos(file, &new_position);

	//		fputc('B', file);

	//		char* buffer = new char[12] {};

	//		strcpy_s(buffer, 12, "Potato");

	//		// fwrite(buffer, sizeof(char), 12, file);

	//		// fgetc(file);

	//		fclose(file);
	//	}
	//	else
	//	{
	//		std::cout << "File does not exist";
	//	}
	//}
	// ------------------------------------------
	/*{
		FILE* file = nullptr;
		//char* file_name = new char[_MAX_PATH];

		//std::cin.getline(file_name, _MAX_PATH);

		fopen_s(&file, "data.txt", "w");

		// delete[] file_name;

		if (file != nullptr)
		{
			// file put char
			fputc('#', file);

			// file put string

			char* buffer = new char[32];

			// std::cin.getline(buffer, 32);

			strcpy_s(buffer, 32, "Hello C++");

			fputs(buffer, file);

			delete[] buffer;

			fclose(file);
		}
		else
		{
			std::cout << "Cant open file";
		}
	}*/
}