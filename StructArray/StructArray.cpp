#include <iostream>

enum class Color
{
	Red,
	Green,
	Blue
};

const size_t ROOM_COUNT = 3;
const size_t ADDRESS_SIZE = 32;

struct Flat
{
	struct Room
	{
		double area;
		double length;
		double width;
	} rooms[ROOM_COUNT];

	int number;
	char address[ADDRESS_SIZE]; // ADDRESS_SIZE = 32
	//Room rooms[ROOM_COUNT]; // ROOM_COUNT = 3
	int floor;
};

void fill_flat(Flat& flat, int number, const char* address, Flat::Room* rooms, int floor)
{
	flat.number = number;
	strcpy_s(flat.address, ADDRESS_SIZE, address);

	for (size_t i = 0; i < ROOM_COUNT; ++i)
	{
		flat.rooms[i] = rooms[i];
	}

	flat.floor = floor;
}

void print(Flat& flat)
{
	std::cout << "flat number: " << flat.number << '\n';
	std::cout << "flat addess: " << flat.address << '\n';

	for (size_t i = 0; i < ROOM_COUNT; ++i)
	{
		std::cout << "Room #" << i + 1 << ": " << '\n';

		std::cout << "Area: " << flat.rooms[i].area << '\n';
		std::cout << "Length: " << flat.rooms[i].length << '\n';
		std::cout << "Width: " << flat.rooms[i].width << '\n';
	}

	std::cout << "flat floor: " << flat.floor << '\n';
}


//struct Object
//{
//	void* data;
//	int size;
//};

typedef struct Object
{
	void* data;
	int size;
} Object_t;


void foo(Object_t* obj);
void foo(struct Object* obj);

struct
{
	int value_1;
	int value_2;
	int value_3;
} data;

int main()
{
	Object* a = new Object;
	Object* b = new Object;

	delete a;
	delete b;

	std::cout << &a << '\n';
	std::cout << &b << '\n';

	data.value_1 = 42;
	data.value_2 = 13;
	data.value_3 = 10;

	/*{
		Flat flat[2]{};

		Flat::Room rooms[3]
		{
			{ 20, 5.3, 7.1 },
			{ 30, 5.9, 9.0 },
			{ 40, 15.2, 17.42 }
		};


		fill_flat(flat[0], 42, "28 may", rooms, 8);

		print(flat[0]);

		std::cout << "\n---------------------------\n";
		Flat::Room rooms_flat1[3]
		{
			{ 10, 4.3, 6.1 },
			{ 20, 4.9, 8.0 },
			{ 30, 11.2, 15.42 }
		};

		fill_flat(flat[1], 41, "28 may", rooms_flat1, 7);

		print(flat[1]);
	}*/

	/*Flat* flat1 = new Flat{};
	Flat* flat2 = new Flat{};

	Flat** flats = new Flat * [2] {};

	flats[0] = flat1;
	flats[1] = flat2;
	*/
}