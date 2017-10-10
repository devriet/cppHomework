#include <stdlib.h>
#include "Concert.h"
#include <iostream>
#include <vector>

//std::string concertName;
//std::tm date;
//int desire;
//std::vector<std::string> friends;

Concert::Concert ( std::string name, std::tm date, int desire ) {
	this->concertName = name;
	this->desire = desire;
	this->date = date;
}

Concert::Concert ( std::string name, std::tm date, int desire, std::vector<std::string> friends ) {
	this->concertName = name;
	this->desire = desire;
	this->date = date;
	this->friends = friends;
}

Concert::Concert ( std::string name, std::tm date, int desire, std::string withFriend ) {
	this->concertName = name;
	this->desire = desire;
	this->date = date;
	this->friends.push_back(withFriend);
}

std::ostream& operator<<( std::ostream os, const Concert other ) {
	os << this->date << "\t" << this->concertName << "\t" << this->desire << "\t" << friends;
	return os;
}

