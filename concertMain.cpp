#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Concert.h"

int main( int argc, char** argv ) {
	std::vector<Concert> concerts; 
	time_t t = time(0);
	std::tm time = *localtime(&t);
	Concert c( "Today's Concert", time, 8 );
//	std::cout << c;
	concerts.push_back(c);
	time.tm_mon = 9;
	time.tm_mday = 31;
	c = Concert("Halloween Concert!", time, 10);
	concerts.push_back(c);
//	std::cout << c;
//	std::string s;
//	std::ostringstream ss;
	std::srand(std::time(0));
	for (int i= 0; i < 8; i++ ) {
		time.tm_mon = std::rand()%12;
		time.tm_mday = std::rand()%31 + 1;
		time.tm_year = std:: rand()%6 + 117;
		//ss << "Random Concert " << setw(4) << i;
		//s = ss.str();
		//ss.str("");
		c = Concert("Random Concert", time, std::rand()%10+1);
		concerts.push_back(c);
//		std::cout << c;
	}
	std::sort(concerts.begin(), concerts.end());
	for (int i = 0; i < concerts.size(); i ++ ) {
		std::cout << concerts[i];
	}
}
