/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-26 23:05:23
**  
**  @statu  solved
**  @brief
**  Write your own version of a function that uses a shared_ptr to manage a connection.
**/

#include <iostream>
#include <cstdio>
#include <string>
#include <memory>

using namespace std;

struct connection {
    string ip;
    int port;
    connection(string ip_, int port_) : ip(ip_), port(port_) {}
};

struct destination {
    string ip;
    int port;
    destination(string ip_, int port_) : ip(ip_), port(port_) {}
};

connection connect(destination* pDest) {
    shared_ptr<connection> pCnct(new connection(pDest->ip, pDest->port));
    cout << "creating connection(" << pCnct.use_count() << ")" << endl;
    return *pCnct;
}

void disconnect(connection pCnct) {
    cout << "connection close(" << pCnct.ip << ":" << pCnct.port << ")" << endl;
}

void f(destination &d) {
    connection cnct = connect(&d);
    shared_ptr<connection> p(&cnct, [](connection *p) { disconnect(*p); });
    cout << "connection now(" << p.use_count() << ")" << endl;
}

int main(int argc, char const *argv[]) {
    destination dest("202.118.176.67", 3316);
    f(dest);
    
    getchar();
    return 0;
}