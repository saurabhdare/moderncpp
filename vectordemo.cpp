#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> v { 123, 456, 789, 100, 200 };
    for (int i : v) {
        std::cout << i << ", ";
    }
    std::cout << "\n";
    return 0;
}