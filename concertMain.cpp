#include <iostream>
#include "Concert.h"

int main( int argc, char** argv ) {
	time_t t = time(0);
	Concert c( "Today's Concert", *localtime(&t), 8 );
	std::cout << c << "\n";
}
