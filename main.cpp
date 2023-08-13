#include "Networking/Networking.h"
#include <fstream>
#include <iostream>

using namespace bric::Networking;
using namespace std;

int main()
{
    const char* hostAddr = "192.168.1.54";
    const char* gateway = "192.168.1.1";
    const char* netmask = "255.255.255.0";
    const char* minAddr = "192.168.1.2";
    const char* maxAddr = "192.168.1.254";

    DHCP::Session session(hostAddr,
                          gateway,
                          gateway,
                          minAddr,
                          maxAddr,
                          netmask,
                          "null");
    
    return 0;
}