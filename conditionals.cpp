#include <iostream>

int main() {
    char letter {};
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (letter >= 'A') {
        if (letter <= 'Z') {
            std::cout << "You entered an uppercase letter." << std::endl;
            return 0;
        }
    }

    if (letter >= 'a') {
        if (letter <= 'z') {
            std::cout << "You entered a lowercase letter." << std::endl;
            return 0;
        }
        std::cout << "You did not enter a letter." << std::endl;
    }

    return 0;
}
