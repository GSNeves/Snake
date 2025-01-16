#ifndef SNAKE_H
#define SNAKE_H

struct Coordinate {
    int x;
    int y;
};

enum Direction {
    Up,
    Left,
    Down,
    Right
};

struct Segment {
    Coordinate position;
    Segment* next;
};

struct Snake {
    Segment* head;
    Segment* tail;
    Direction direction;
};



Snake initialize(int width, int height);
void printSnake(Snake snake);
void move(Snake& snake);

#endif //SNAKE_H
