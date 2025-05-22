#include <iostream>

enum Color { Red, Green, Blue };
enum Fruit { Apple, Orange, Banana };

bool isMatch(Color c, Fruit f) {
    return c == f;  // ✅ allowed: both are just ints
}

int main() {
    Color c = Red;
    Fruit f = Apple;

    if (isMatch(c, f)) {
        std::cout << "Matched!\n";
    } else {
        std::cout << "Not matched.\n";
    }
}
