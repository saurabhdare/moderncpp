#include <memory>
#include <iostream>

int main()
{
    auto pdata { std::make_unique<double>(999.0) };

    std::cout << pdata.get() << std::endl;
    std::cout << *pdata << std::endl;

    pdata.reset();

    return 0;
}
