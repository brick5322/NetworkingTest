#include "Networking/DHCP/Message.h"
#include <fstream>
#include <iostream>

using namespace bric::Networking;
using namespace std;

int main()
{
    char buffer[300];
    
    DHCP::Message msg;
    ifstream discover("resources/discover.bin",ios::binary|ios::in);
    discover.read(buffer,300);
    discover.close();
    ostream mst(&msg);
    mst.write(buffer,300);
    cout << msg.size();
    msg.analysis();
    return 0;
}