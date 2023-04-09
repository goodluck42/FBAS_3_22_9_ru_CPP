#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "console/console.h"

using namespace app::console;

const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

void SetCursor(int x, int y)
{
    COORD coords{ x, y };

    SetConsoleCursorPosition(handle, coords);
}

int main()
{
    while (true)
    {
        if (_kbhit())
        {
            int c = _getch();

            if (c == 'd' || c == 'a')
            {
                std::cout << "rotate" << '\n';
            }
        }

        std::cout << "fall" << '\n';

        Sleep(256);
    }


    //char text[16];

    //std::cin.getline(text, 16);
    //    

    //char c = '#';
    //coord prev_x = 0;
    //coord prev_y = 0;

    //while (true)
    //{
    //    key k = io.readk();

    //    coord cur_x;
    //    coord cur_y;

    //    switch (k)
    //    {
    //        case key::W:
    //        case key::w:
    //        {
    //            io.mvup();
    //            io.gcpos(&cur_x, &cur_y);
    //            io.scpos(cur_x - 1, cur_y);
    //            
    //            prev_x = cur_x;
    //            prev_y = cur_y + 1;

    //            break;
    //        }
    //            
    //        case key::A:
    //        case key::a:
    //            io.mvleft();
    //            io.gcpos(&cur_x, &cur_y);
    //            io.scpos(cur_x - 1, cur_y);

    //            prev_x = cur_x + 1;
    //            prev_y = cur_y;

    //            break;
    //        
    //        case key::S:
    //        case key::s:
    //            io.mvdown();
    //            io.gcpos(&cur_x, &cur_y);
    //            io.scpos(cur_x - 1, cur_y);

    //            prev_x = cur_x;
    //            prev_y = cur_y - 1;

    //            break;
    //        
    //        case key::D:
    //        case key::d:
    //            io.mvright();
    //            io.gcpos(&cur_x, &cur_y);
    //            io.scpos(cur_x - 1, cur_y);

    //            prev_x = cur_x - 1;
    //            prev_y = cur_y;

    //            break;
    //    }

    //    io << c;

    //    io.erase(prev_x - 1, prev_y);
    //}
    



    /*SetCursor(6, 9);
   
    std::cout << "Hello";

    SetCursor(15, 18);

    std::cout << "world";*/

    



    // getch
    /*{
        bool is_arrow_key = false;
        while (true)
        {
            int c = _getch();

            if (is_arrow_key)
            {
                switch (c)
                {
                    case 72:
                    {
                        std::cout << "arrow up" << '\n';
                        break;
                    }

                    case 80:
                    {
                        std::cout << "arrow down" << '\n';
                        break;
                    }
                    case 75:
                    {
                        std::cout << "arrow left" << '\n';
                        break;
                    }

                    case 77:
                    {
                        std::cout << "arrow right" << '\n';
                        break;
                    }
                }

                is_arrow_key = false;
            }

            if (c == 224)
            {
                is_arrow_key = true;

                continue;
            }

            switch (c)
            {
                case 87:
                case 119:
                {
                    std::cout << "W" << '\n';

                    break;
                }
                case 65:
                case 97:
                {
                    std::cout << "A" << '\n';

                    break;
                }
                case 83:
                case 115:
                {
                    std::cout << "S" << '\n';

                    break;
                }
                case 68:
                case 100:
                {
                    std::cout << "D" << '\n';

                    break;
                }
            }
        }
    }*/
}