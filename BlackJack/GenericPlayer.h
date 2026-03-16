#pragma once

class GenericPlayer : public Hand
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
	std::string name;
};

