

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "../extern/httplib/httplib.h"



int main(int argCount, const char** args)
{
    std::string relativePath("./");
    if(argCount > 0) relativePath = args[0];


    httplib::SSLServer server;

    server.get("/MainPage", [](const httplib::Request &, httplib::Response &res) {

    res.set_content("Hello World!", "text/plain");

    });


}