#include <string>
#include "snake.h"

Snake initialize(const int width, const int height) {
    auto* segment = new Segment { {width/2, height/2}, nullptr };
    const Snake snake = { segment, nullptr};
    return snake;
}
