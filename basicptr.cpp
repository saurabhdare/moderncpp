#include <iostream>

int main()
{
    // in cents
    int unit_price {295};
    int count {};
    int discount_threshold {25};
    double discount {0.07};
    int *pcount {&count};
    
    std::cout << "Enter the number of items you want: ";
    std::cin >> *pcount;
    std::cout << "The unit price is: $" << unit_price / 100.0 << "\n";

    int *punit_price {&unit_price};
    int price {*pcount * *punit_price};
    auto *pprice {&price};
    
    // calculate net price in $
    double net_price {};
    double *pnet_price { nullptr };

    pnet_price = &net_price;

    if (*pcount > discount_threshold) {
        std::cout << "You qualify for a discount of " << discount * 100 << " percent.\n";
        *pnet_price = price * (1 - discount) / 100;
    } else {
        net_price = *pprice / 100;
    }

    std::cout << "The net price for " << *pcount << " items is $" << net_price << "\n";

    return 0;
}
