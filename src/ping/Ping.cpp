#include <ping/Ping.hpp>
// #include <Dot/Dot.hpp>
#include <iostream>
#include <google/protobuf/message.h>
#include <message.pb.h>
#include <clog/clog.h>

using namespace ping;
// using namespace dot;
using namespace std;

Ping::Ping()
{
    clog_enable();
    clog_i("TAG", "info");
    // Dot &dot = Dot::getDot(4000);
    // dot.connect("localhost", 3500)
    //     .on(DotEvent::CONNECTED, [](Dot &dot) {
    //         while (1)
    //         {
    //             std::string message;
    //             getline(cin, message);
    //             dot.write(message);
    //         }
    //     });
}

int Ping::run()
{
    while (1)
        ;
    return 0;
}