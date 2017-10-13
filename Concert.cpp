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

std::string Concert::getName () const {
	return concertName;
}

int Concert::getDesire () {
	return desire;
}

std::tm Concert::getDate () {
	return date;
}

std::vector<std::string> Concert::getFriends () {
	return friends;
}

/*
 *
 *
 */

bool Concert::operator<( const Concert& other ) const {
	if ( date.tm_year < other.date.tm_year ) {
		return true;
	} else if ( date.tm_year > other.date.tm_year ) {
		return false;
	} else if ( date.tm_mon < other.date.tm_mon ) {
		return true;
	} else if ( date.tm_mon > other.date.tm_mon ) {
		return false;
	} else if ( date.tm_mday < other.date.tm_mday ) {
		return true;
	} else {
		return false;
	}
}

std::ostream& operator<<( std::ostream& os, const Concert& other ) {
	os << other.date.tm_mon + 1 << "/" << 
		other.date.tm_mday << "/" << 
		other.date.tm_year + 1900 << 
		"\t" << other.concertName << 
		"\t" << other.desire << "\n";
	return os;
}

