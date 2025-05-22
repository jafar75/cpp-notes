#include <iostream>
#include <string>

using namespace std;

struct Entry {
    string name;
    int number;
};

// Overload the << operator for Entry
ostream& operator<<(ostream& os, const Entry& e) {
    return os << "{\"" << e.name << "\", " << e.number << "}";
}

int main() {
    Entry e = {"Alice", 42};
    cout << e << endl;  // Output: {"Alice", 42}
    return 0;
}