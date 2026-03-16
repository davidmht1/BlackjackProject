#include "GenericPlayer.h"
#include "Hand.h"
#include <iostream>

GenericPlayer::GenericPlayer(){}

bool GenericPlayer::isBusted()
{
	if (getTotal() > 21)
		return true;
	return false;
}

bool GenericPlayer::bust()
{
	std::cout << "Player: " << getName() << " has busted!" << std::endl;
}

std::string GenericPlayer::getName()
{
	return this->name;
}

void GenericPlayer::setName(std::string name)
{
	this->name = name;
}