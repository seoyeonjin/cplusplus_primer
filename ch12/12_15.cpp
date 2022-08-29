#include <iostream>
#include <string>

struct connection {
	std::string ip;
	int port;
	connection(std::string ip_, int port_) : ip(ip_), port(port_) {}
};

struct destination {
	std::string ip;
	int port;
	destination(std::string ip_, int port_) : ip(ip_), port(port_) {}
};

connection connect(destination* p) {
	std::shared_ptr<connection> pConn(new connection(p->ip, p->port));
	return *pConn;
}
void disconnect(connection);

void f(destination& d) {
	connection conn = connect(&d);
	std::shared_ptr<connection> p(&conn, [](connection* p) { disconnect(*p); });
}

void end_connetion(connection* p) { disconnect(*p); }
