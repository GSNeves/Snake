#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "board.h"


void printBoard() {
    HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < BOARD_HEIGHT; ++i) {
        for (int j = 0; j < BOARD_WIDTH; ++j) {
            if (i == 0 || i == BOARD_HEIGHT - 1 || j == 0 || j == BOARD_WIDTH - 1) {
                SetConsoleTextAttribute(hconsole, BACKGROUND_BLUE);
                std::cout << "#";
            }
            else {
                SetConsoleTextAttribute(hconsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    SetConsoleTextAttribute(hconsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
