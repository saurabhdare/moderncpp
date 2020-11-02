#include <iostream>
#include <iomanip>

int main() {
    size_t count{};
    std::cout << "How many heights will you enter?";
    std::cin >> count;
    // create array at runtime
    int height[count];

    // read the heights
    size_t entered{};

    while (entered < count) {
        std::cout << "Enter a height: ";
        std::cin >> height[entered];
        if (height[entered] > 0) {
            ++entered;
        } else {
            std::cout << "A height must be positive - try again.\n";
        }
    }

    //calculate the sum of the heights
    unsigned int total {};
    for (auto h : height) {
        total += h;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The average height is " << static_cast<float>(total) / count << std::endl;
    return 0;
}
