#include <iostream>
#include "Something.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto something1 = new Something();
    return something1->doSomething();
}

