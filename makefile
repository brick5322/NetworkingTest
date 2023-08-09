Debug/main : Debug/main.o Debug/Message.o
	g++ -o $@ $^

Debug/main.o : main.cpp Debug
	g++ -std=c++17 -g -O0 -c -o $@ $<

Debug/Message.o : NetWorking/DHCP/private/Message.cpp Debug
	g++ -std=c++17 -g -O0 -c -o $@ $<

Debug :
	mkdir Debug

