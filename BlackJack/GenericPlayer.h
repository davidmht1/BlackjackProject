#pragma once
#include <string>

class GenericPlayer
{
public:
	GenericPlayer();
	virtual ~GenericPlayer();
	bool virtual isHitting();
	bool isBusted();
	bool bust();
	std::string getName();
	void setName(std::string name);
private:
	string name;
};

