// Sizing pond for happy fish
#include <iostream>
#include <numbers>
#include <cmath>

int main()
{
    const double fish_factor {2.0 / 0.5};
    const double inches_per_foot {12.0};

    double fish_count {};
    double fish_length {};

    std::cout << "Enter the number of fish you want to keep: ";
    std::cin >> fish_count;
    std::cout << "Enter the average fish length in inches: ";
    std::cin >> fish_length;

    fish_length /= inches_per_foot;
    std::cout << '\n';

    const double pond_area { fish_count * fish_length * fish_factor };
    const double pond_diameter { 2.0 * std::sqrt(pond_area / std::numbers::pi)};

    std::cout << "Pond diameter required for " << fish_count << " fish is " << pond_diameter << " feet.\n";
}

