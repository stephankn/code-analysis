#include <array>
#include <string>
#include <iostream>

// here I miss a comma: warning expected, because array is two elements and string concatenation is unexpected
const std::array<std::string, 2> stringarray
{
    "one"
    "line"
};

int main() {
    for (const auto& str : stringarray) {
        std::cout << str << std::endl;
    }
    return 0;
}
