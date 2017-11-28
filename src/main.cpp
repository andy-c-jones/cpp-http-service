#include <iostream>
#include <memory>
#include "../ThirdParty/crow/crow_all.h"
#include "service/Example.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() {
        auto something1 = std::make_unique<Example>();
        std::stringstream ss;
        ss << "Hello world " << something1->doSomething();
        return ss.str();
    });

    app.port(18080).multithreaded().run();
}
