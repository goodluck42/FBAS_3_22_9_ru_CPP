#include <iostream>

void takeItem()
{
    std::cout << "takeItem" << '\n';
}

void talkToNPC()
{
    std::cout << "talkToNPC" << '\n';
}

void interact(void (*action)())
{
    action();

    std::cout << "interaction done" << '\n';
}

void increment(int* value)
{
    ++(*value);
}

void increment(int& value)
{
    ++value;
}

void change_address(int*& addr)
{
    std::cout << "change_address " << &addr << '\n';

    delete addr;

    addr = new int{ 13 };
}

void change_value(int& value)
{
    value = 13;
}

template<typename T> void append(T*& arr, size_t& len, T value)
{
    T* new_arr = new T[len + 1]; // new_arr = 0xfffac

    // len = 3
    // 0   1   2    3
    // 10, 20, 30
    // 10, 20, 30, -151234
    for (size_t i = 0; i < len; ++i)
    {
        new_arr[i] = arr[i];
    }

    new_arr[len] = value;

    delete[] arr;

    arr = new_arr;

    ++len;
}

template<typename T> void print(T* arr, size_t size)
{
    std::cout << "{ ";
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i];

        if (i != size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << " }" << '\n';
}

int main()
{
    size_t len = 3;

    double* arr = new double[len] { 10.2, 20.1, 30.1 }; // arr = 0xfffac

    print(arr, len);

    append<double>(arr, len, 42);
    append<double>(arr, len, 13);
    append<double>(arr, len, 90);
    append<double>(arr, len, 123);
    append<double>(arr, len, -10);

    print(arr, len);

    delete[] arr;

    /* {
        int a = 42;

        std::cout << a << '\n';

        change_value(a);

        std::cout << a << '\n';

        int* data = new int{ 42 }; // 0x0000ABCF123

        std::cout << "main " << &data << '\n';

        change_address(data); // data = new int{13};

        std::cout << *data << '\n';

        delete data;
    }*/

    /* {
        int a = 42;
        int& ref = a;

        ++ref;

        std::cout << a << '\n';
        std::cout << ref << '\n'; // *ref

        std::cout << &a << '\n';
        std::cout << &ref << '\n';
    }*/

   // std::cout << "--------------------\n";
    /*{
        int b = 13;
        int* ptr = &b;

        ++(*ptr);

        std::cout << b << '\n';
        std::cout << *ptr << '\n';

        std::cout << &b << '\n';
        std::cout << &ptr << '\n';
    }*/


    /*{
        int i = 0;

        while (i < 5)
        {
            std::cout << i << '\n';

            increment(&i);
        }
    }*/

    /*{
        int characterDistance = 5;
        int itemDistance = 10;
        int playerDistance;

        std::cin >> playerDistance;

        if (playerDistance >= characterDistance - 1 && playerDistance <= characterDistance + 1)
        {
            interact(talkToNPC);
        }

        if (playerDistance >= 9 && playerDistance <= 11)
        {
            interact(takeItem);
        }
    }*/
}
