#ifndef SNAKE_H
#define SNAKE_H

struct Coordinate {
    int x;
    int y;
};

struct Segment {
    Coordinate position;
    Segment* next;
};

struct Snake {
    Segment* head;
    Segment* tail;
};

Snake initialize(int width, int height);

#endif //SNAKE_H
