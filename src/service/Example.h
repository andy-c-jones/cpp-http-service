#ifndef CMDLINEPROG_EXAMPLE_H
#define CMDLINEPROG_EXAMPLE_H

#include "../../ThirdParty/crow/crow_all.h"

class Example {
public:
    Example();

    crow::json::wvalue doSomething();
};

#endif //CMDLINEPROG_EXAMPLE_H


