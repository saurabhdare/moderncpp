#include <iostream>

int main() {
    const unsigned feet_per_yard{3};
    const unsigned inches_per_foot{12};

    double length{};
    unsigned int yards{};
    unsigned int feet{};
    unsigned int inches{};

    std::cout << "Enter a length in yards as a decimal: ";
    std::cin >> length;

    yards = static_cast<unsigned int>(length);
    feet = static_cast<unsigned int>((length - yards) * feet_per_yard);
    inches = static_cast<unsigned int>(length * feet_per_yard * inches_per_foot) % inches_per_foot;

    std::cout << length << " yards converts to " << yards << " yards " << feet << " feet " << inches << " inches." << std::endl;
    return 0;
}
