#include <iostream>
#include "Concert.h"

int main( int argc, char** argv ) {
	time_t t = time(0);
	Concert* c = new Concert( "Test concert", *localtime(&t), 8 );
	std::cout << &c << "\n";
	std::string v = "test";
	std::cout << v << "\n";
}
