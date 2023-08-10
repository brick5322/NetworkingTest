#include "Networking/DHCP/Message.h"
#include <fstream>
#include <iostream>

using namespace bric::Networking;
using namespace std;

int main()
{
    
    DHCP::Message msg;
    msg.resize(300);
    ifstream discover("resources/discover.bin",ios::binary|ios::in);
    discover.read((char*)msg.data(), 300);
    discover.close();
    msg.analysis();
    return 0;
}