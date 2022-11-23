#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    COORD c;
    c.X = 20;
    c.Y = 16;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("Hello world!\n");
    return 0;
}
