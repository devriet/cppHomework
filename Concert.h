#ifndef CONCERT_H
#define CONCERT_H

#include <iostream>
#include <vector>
#include <ctime>

class Concert {

private:

public:
	std::string concertName;
	std::vector<std::string> friends;
	int desire;
	std::tm date;
	Concert( std::string name, std::tm date, int desire );
	Concert( std::string name, std::tm date, int desire, std::vector<std::string> friends );
	Concert( std::string name, std::tm date, int desire, std::string withFriend );
	std::string getName () const;
	int getDesire ();
	std::tm getDate ();
	std::vector<std::string> getFriends ();
	//bool operator<( const Concert& other ) const;
	friend std::ostream& operator<<( std::ostream& os, const Concert& other );
};

#endif
