#include <iostream>
#include <iomanip>

struct User
{
	char* login;
	char* password;
	int age;
};


struct Engine;

struct Car
{
	char* model;
	Engine* engine;
};

enum class EngineType
{
	N,
	S
};

struct Engine
{
	EngineType type;
	char* manufacturer;
	char* serialNumber;
	double volume;
};

User* create_User(const char* login, const char* password, int age)
{
	User* user = new User;

	user->login = new char[64] {};
	user->password = new char[64] {};
	// (*user).age = age;
	user->age = age;

	strcpy_s(user->login, 64, login);
	strcpy_s(user->password, 64, password);

	return user;
}

void delete_User(User* user)
{
	delete[] user->login;
	delete[] user->password;

	delete user;
}

void print(User* user)
{
	std::cout << "Login -> " << user->login << '\n';
	std::cout << "Password -> " << user->password << '\n';
	std::cout << "Age -> " << user->age << '\n';
}

struct Point
{
	int x;
	int y;
	int z;
};

int main()
{
	Car car;

	/*{
		size_t len = 3;
		User** users = new User * [len];

		size_t i = 0;

		while (i < len)
		{
			char login[64];
			char password[64];
			int age;

			std::cout << "Enter login -> ";
			std::cin.getline(login, 64);

			std::cout << "Enter password -> ";
			std::cin.getline(password, 64);

			std::cout << "Enter age -> ";
			std::cin >> age;
			std::cin.ignore();


			users[i] = create_User(login, password, age);

			++i;
		}

		for (size_t i = 0; i < len; ++i)
		{
			// users[i] = User*
			print(users[i]);
		}

		for (size_t i = 0; i < len; ++i)
		{
			// users[i] = User*
			delete_User(users[i]);
		}
	}*/

	/*char* login = new char[64];
	char* password = new char[64];
	int age;

	std::cout << "Login -> ";
	std::cin.getline(login, 64);

	std::cout << "Password -> ";
	std::cin.getline(password, 64);

	std::cout << "Age -> ";
	std::cin >> age;

	delete[] login;
	delete[] password;*/
}