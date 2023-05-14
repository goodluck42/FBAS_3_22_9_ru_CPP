#include <iostream>
#include <stdio.h>

const char* FILE_NAME = "persons.bin";

struct Person
{
	char name[32];
	int age;
};

size_t array_growth(size_t capacity, size_t length)
{
	return capacity * 2;
}

template<typename T> void reallocate_array(T*& data, size_t& length, size_t& capacity)
{
	if (length == capacity)
	{
		T* new_data = new T[capacity * 2];

		for (size_t i = 0; i < length; ++i)
		{
			new_data[i] = data[i];
		}

		capacity *= 2;

		delete[] data;

		data = new_data;
	}
}

template<typename T> void append(T*& data, T element, size_t& length, size_t& capacity)
{
	reallocate_array(data, length, capacity);
	data[length++] = element;

	//if (length < capacity)
	//{
	//	data[length++] = element;
	//}
	//else
	//{
	//	T* new_data = new T[array_growth(capacity, length)]; // capacity * 2;

	//	for (size_t i = 0; i < length; ++i)
	//	{
	//		new_data[i] = data[i];
	//	}
	//	delete[] data;

	//	new_data[length++] = element;

	//	capacity *= 2;

	//	data = new_data;
	//}
}

template<typename T> T* create_array(size_t capacity)
{
	return new T[capacity];
}

bool write_Person(Person& person)
{
	FILE* file = nullptr;

	fopen_s(&file, FILE_NAME, "ab");

	if (file != nullptr)
	{
		fwrite(&person, sizeof(Person), 1, file);

		fclose(file);

		return true;
	}

	return false;
}

Person* read_Persons(size_t& length, size_t& capacity)
{
	FILE* file = nullptr;
	Person* persons = create_array<Person>(capacity);

	fopen_s(&file, FILE_NAME, "rb");

	if (file != nullptr)
	{
		Person* person = new Person;

		while (true)
		{
			if (fread(person, sizeof(Person), 1, file) == 0)
			{
				break;
			}

			append(persons, *person, length, capacity);
		}

		delete person;

		fclose(file);
	}

	return persons;
}

void print_Person(Person& person)
{
	std::cout << "name = " << person.name << '\n';
	std::cout << "age = " << person.age << '\n';
}

int main(int argc, char** argv)
{
	/*size_t capacity = 3;
	size_t len = 0;

	int* array = create_array<int>(capacity);

	append(array, 10, len, capacity);
	append(array, 42, len, capacity);
	append(array, 13, len, capacity);
	append(array, 44, len, capacity);
	append(array, 11, len, capacity);
	append(array, 12, len, capacity);
	append(array, 19, len, capacity);

	for (size_t i = 0; i < len; ++i)
	{
		std::cout << array[i] << '\n';
	}

	std::cout << "length = " << len << '\n';
	std::cout << "capacity = " << capacity << '\n';


	delete[] array;*/

	//Person p1{ "StASS", 19 };

	//write_Person(p1);

	size_t length = 0;
	size_t capacity = 3;

	Person* persons = read_Persons(length, capacity);

	for (size_t i = 0; i < length; ++i)
	{
		print_Person(persons[i]);
	}

	delete[] persons;

	// flags:
	// w - write (creates file if not exists) with truncate
	// r - read
	// a - append
	// w+ - write & read
	// r+ - read & write
	// a+ - read & append
	// b - binary
	// wb
	// rb
	// ab
	// wb+
	// rb+
	// ab+


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