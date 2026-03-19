#include "House.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include <iostream>

House::House()
{

}

bool House::isHitting()
{
	if (this->getTotal() <= 16)
		// hits
		;
}

void House::firstFirstCard()
{
	if (!this->cardVector.empty())
		cardVector[0]->flip();
	else
		std::cout << "There are no cards to flip!" << std::endl;
}