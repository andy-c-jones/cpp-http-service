#include <iostream>
#include <memory>
#include "Something.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto something1 = std::make_unique<Something>();

    return something1->doSomething();
}

