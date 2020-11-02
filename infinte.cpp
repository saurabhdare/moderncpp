#include <iostream>
#include <iomanip>

int main() {
    const size_t size {1000};
    double x[size]{};
    size_t count {};

    while (true) {
        double input {};
        std::cout << "Enter a non-zero value, or 0 to end: ";
        std::cin >> input;
        if (input == 0)
            break;
        x[count] = input;
        if (++count == size) {
            std::cout << "Sorry, I can only store " << size << " values.\n";
            break;
        }
    }

    if (!count) {
        std::cout << "Nothing to sort..." << std::endl;
        return 0;
    }

    std::cout << "Starting sort." << std::endl;
    while (true) {
        bool swapped {false};
        for (size_t i{}; i < count - 1; ++i) {
            if (x[i] > x[i + 1]) {
                const auto temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    std::cout << "Your data in ascending sequence:\n" << std::fixed << std::setprecision(1);
    const size_t perline {10};
    size_t n {};

    for (size_t i {}; i < count; ++i) {
        std::cout << std::setw(8) << x[i];
        if (++n == perline) {
            std::cout << std::endl;
            n = 0;
        }
    }

    std::cout << std::endl;
    return 0;
}
