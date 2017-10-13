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
 */

std::ostream& operator<<( std::ostream& os, const Concert& other ) {
	os << other.date.tm_mon + 1 << "/" << 
		other.date.tm_mday << "/" << 
		other.date.tm_year + 1900 << 
		"\t" << other.concertName << 
		"\t" << other.desire;
	return os;
}

