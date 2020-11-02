#include <iostream>
#include <array> // for std::size

int main() {
    const size_t max_length{80};
    char stars[][max_length] {
        "Fatty Arbuckle", "Clara Bow",
        "Lassie", "Slim Pickens",
        "Boris Karloff", "Mae West",
        "Oliver Hardy", "Greta Garbo"
    };

    size_t choice{};
    std::cout << "Pick a lucky star! Enter a number between  and " << std::size(stars) << ": ";
    std::cin >> choice;

    if (choice >= 1 && choice <= std::size(stars)) {
        std::cout << "Your lucky star is " << stars[choice - 1] << std::endl;
    } else {
        std::cout << "Sorry, you haven't got a lucky star." << std::endl;
    }

    return 0;
}
