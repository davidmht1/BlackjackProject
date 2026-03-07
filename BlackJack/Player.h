#pragma once
#include <string>

class Player
{
public:
	Player(std::string const& name = "");
	virtual ~Player();
	virtual bool isHitting();
	bool win();
	bool lose();
	bool push();
};

