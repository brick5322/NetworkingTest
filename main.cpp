#include "Networking/DHCP/Message.h"
#include <stdio.h>
using namespace bric::Networking;

int main()
{
    FILE *fp = fopen("discover.bin","rb");
    uint8_t buffer[350];
    size_t size = fread(buffer,300,1,fp);

    DHCP::Message message(buffer,300);
    return 0;
}