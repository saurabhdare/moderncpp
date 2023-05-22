#include <iostream>

int main()
{
    int values [] { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    int total {};

    std::cout << "The array is: ";

    for (auto x : values)
        std::cout << x << " ";
    
    std::cout << "\n";
    
    for (auto x : values)
        total += x;
    
    std::cout << "The total of x is: " << total << "\n";

    return 0;
}

