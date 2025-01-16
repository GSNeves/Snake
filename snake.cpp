#include <string>
#include "snake.h"
#include <iostream>


void printSnake(Snake snake) {
    Segment* head = snake.head;
    std::cout << "Snake:\n";
    while (head != NULL) {
        std::cout << head->position.x << ' ' << head->position.y << '\n';
        head = head->next;
    }
}

Snake initialize(const int width, const int height) {
    auto* segment = new Segment { {width/2, height/2}, nullptr };
    const Snake snake = { segment, nullptr, Right};
    return snake;
}

Segment* getNewHead(Snake& snake) {
    Segment* head = snake.head;
    Coordinate newPosition = head->position;

    switch (snake.direction) {
        case Right:
            newPosition.x++;
        break;
        case Left:
            newPosition.x--;
        break;
        case Up:
            newPosition.y++;
        break;
        case Down:
            newPosition.y--;
        break;
    }
    if (head->next == nullptr) {
        return new Segment { newPosition, nullptr };
    }

    return new Segment { newPosition, head };
}

void move(Snake& snake) {
    Segment* head = snake.head;
    snake.head = getNewHead(snake);
    if (snake.tail != nullptr) {
        Segment* newTail = head;
        while (newTail->next != snake.tail) {
            newTail = newTail->next;
        }
        delete snake.tail;
        newTail->next = nullptr;
        snake.tail = newTail;
    }
    else {
        delete head;
    }

}

