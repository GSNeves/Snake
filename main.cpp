#include <iostream>
#include <conio.h>
#include "board.h"
#include "snake.h"

int main() {
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    Snake initial = initialize(BOARD_WIDTH, BOARD_HEIGHT);
    printBoard();
    std::cout << initial.head->position.x << " " << (initial.head->position).y << std::endl;
    std::cin.get();
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.