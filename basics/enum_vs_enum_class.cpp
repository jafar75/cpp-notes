#include <iostream>

enum Color { Red, Green };
enum Fruit { Apple, Banana };

// Uncommenting the following will compile but is unsafe:
// bool isSame(int x, int y) { return x == y; }

enum class Direction { Left, Right };

int main() {
    Color c = Red;
    Fruit f = Banana;

    if (c == f) { // Compiles!  Logically wrong
        std::cout << "Color and Fruit are equal?!" << std::endl;
    }

    Direction d = Direction::Left;
    // if (d == Left) {} // Won't compile: scoped enum
    if (d == Direction::Left) {
        std::cout << "Direction is Left" << std::endl;
    }
}
