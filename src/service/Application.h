#ifndef CPP_HTTP_SERVICE_APPLICATION_H
#define CPP_HTTP_SERVICE_APPLICATION_H

#include "../../ThirdParty/crow/crow_all.h"

class Application {
public:
    Application();

    void Start();

private:
    crow::SimpleApp app;
};


#endif //CPP_HTTP_SERVICE_APPLICATION_H
