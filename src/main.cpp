#include <iostream>
#include <memory>
#include "service/Something.h"
#include "../ThirdParty/crow/crow_all.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() {
        auto something1 = std::make_unique<Something>();
        std::stringstream ss;
        ss << "Hello world " << something1->doSomething();
        return ss.str();
    });

    app.port(18080).multithreaded().run();
}
