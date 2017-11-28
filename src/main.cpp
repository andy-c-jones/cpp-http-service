#include <iostream>
#include <memory>
#include "service/Application.h"

int main() {
    auto app = std::make_unique<Application>();
    app->Start();
}
