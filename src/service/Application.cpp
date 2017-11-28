#include "Application.h"
#include "Example.h"


Application::Application() {
    CROW_ROUTE(app, "/")([]() {
        auto example = std::make_unique<Example>();
        return example->doSomething();;
    });
}

void Application::Start() {
    app.port(18080).multithreaded().run();
}