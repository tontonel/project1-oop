#include <iostream>
#include "./Repository/ProductRepo.h"
#include "./Domain/Product.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Product p1 = Product("123", "rosie", "legume", 123, 2);

    return 0;
}
