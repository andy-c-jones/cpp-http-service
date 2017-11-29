#ifndef CPP_HTTP_SERVICE_EXAMPLE_H
#define CPP_HTTP_SERVICE_EXAMPLE_H

#include "../../ThirdParty/crow/crow_all.h"

class Example {
public:
    Example();

    crow::json::wvalue doSomething();
};

#endif //CPP_HTTP_SERVICE_EXAMPLE_H


