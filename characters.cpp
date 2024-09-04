#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string text;

    std::cout << "Enter a line of text:\n";
    std::getline(std::cin, text);

    unsigned vowels{};
    unsigned consonants{};

    for (const auto ch : text) {
        if (std::isalpha(ch)) {
            switch (std::tolower(ch)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowels;
                break;
            default:
                ++consonants;
                break;
            }
        }
    }

    std::cout << "Your input contained " << vowels << " vowels and " 
    << consonants << " consonants." << std::endl;
}
