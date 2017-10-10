#ifndef CONCERT_H
#define CONCERT_H

class Concert {
private:

public:
	std::string concertName;
	std::vector<std::string> friends;
	int desire;
	std::tm date;
	//bool Concert::operator<( const Concert& other ) const;
	//ostream& operator<<( ostream& os, const Concert& other );
};

#endif
