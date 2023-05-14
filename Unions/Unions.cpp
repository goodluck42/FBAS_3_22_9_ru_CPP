#include <iostream>

union Response
{
	int code;
	char* message;
};

union Char
{
	char symbol;
	unsigned long code;
};

struct Time
{
	long h : 5;
	long m : 6;
	long s : 6;
};

void foo(double) {} // foo_double
void foo(int) {} // foo_int

void print_Char(union Char a_char, int variant)
{
	switch (variant)
	{
		case 1:
			std::cout << a_char.code << '\n';
			break;
		case 2:
			std::cout << a_char.symbol << '\n';
	}
}

struct Sample
{
	char a[9];
};

union Test
{
	Sample a; // double 8 of 8
	long b; 
};


union B
{
	double a;
	int b;
};

struct A
{
	B a;
	char c;
};



struct Student
{
	char* name;
	size_t _name_size;
	int age;
};


void write_Student(Student& student)
{
	FILE* file{};

	fopen_s(&file, "studs.bin", "wb");

	if (file != nullptr)
	{
		fwrite(&student._name_size, sizeof(size_t), 1, file);
		fwrite(student.name, sizeof(char), student._name_size, file);
		fwrite(&student.age, sizeof(int), 1, file);

		fclose(file);
	}
}

Student* read_Student()
{
	FILE* file{};

	fopen_s(&file, "studs.bin", "rb");

	if (file != nullptr)
	{
		Student* student = new Student;

		fread(&student->_name_size, sizeof(size_t), 1, file);

		student->name = new char[student->_name_size] {};

		fread(student->name, sizeof(char), student->_name_size, file);
		fread(&student->age, sizeof(int), 1, file);

		fclose(file);

		return student;
	}

	return nullptr;
}

int main()
{
	Student* student = read_Student();

	std::cout << student->age << '\n';
	std::cout << student->name << '\n';
	std::cout << student->_name_size << '\n';

	delete student;

	/*student.age = 25;
	student._name_size = 32;
	student.name = new char[student._name_size];


	strcpy_s(student.name, student._name_size, "Ikram");

	write_Student(student);*/

	/*std::cout << sizeof(Time) << '\n';
	std::cout << sizeof(Test) << '\n';
	std::cout << sizeof(A) << '\n';*/

	/*Char c{};

	c.code = 66;

	std::cout << c.symbol << '\n';
	std::cout << c.code << '\n';*/
}