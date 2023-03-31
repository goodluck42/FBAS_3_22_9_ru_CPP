#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>


// void cout(char* text); // char* != const char*
// void cout(const char* text); // char* = const char*

void cout(const char* text) // char* = const char*
{
    int i = 0;

    while (true)
    {
        if (*(text + i) == '\0')
        {
            break;
        }

        std::cout << *(text + i);

        ++i;
    }

    std::cout << '\n';
}


void return_many_values(int& count1, int& count2, int& count3)
{
    count1 = 42;
    count2 = 13;
    count3 = 10;
}

void return_many_values(int* count1, int* count2, int* count3)
{
    *count1 = 42;
    *count2 = 13;
    *count3 = 10;
}

int main()
{
    int a;
    int b;
    int c;

    return_many_values(&a, &b, &c);

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';

    //remove_char(text, 'a');

    // @1
    // hello
    // hllo

    // @2
    // hello
    // heo

    // @4
    // Hello. World.
    // Hello! World!



    char user_input[32]{};

    //std::cin >> user_input;

    std::cin.getline(user_input, 32);

    //std::getline(std::cin, user_input, 32);

    std::cout << "input = " << user_input << '\n';

    /* {
        char c = '\0';

        std::cout << (int)c << '\n';

        char text[12] = "Hello world"; // Hello world\0 // char*
        char text2[12]{ 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0' }; // char*
        const char* text3 = "Hello world";

        text2[0] = 'h';
        //text3[0] = 'h';

        cout(text2);
        cout(text3);
    }*/
    /*{
        char* text3 = new char[16] {};

        strcpy(text3, "Hello 123");


        cout(text3);

        delete[] text3;
    }*/
}
