#ifndef CMDLINEPROG_APPLICATION_H
#define CMDLINEPROG_APPLICATION_H

#include "../../ThirdParty/crow/crow_all.h"

class Application {
public:
    Application();

    void Start();

private:
    crow::SimpleApp app;
};


#endif //CMDLINEPROG_APPLICATION_H
