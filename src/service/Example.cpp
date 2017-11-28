#include <sstream>
#include "Example.h"

Example::Example() {
}

crow::json::wvalue Example::doSomething() {
    crow::json::wvalue x;
    x["message"] = "Hello world";
    return x;
}
