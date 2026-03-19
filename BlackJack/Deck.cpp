#include "Deck.h"
#include "GenericPlayer.h"
#include <iostream>

Deck::Deck()
{
	this->cardVector.reserve(52);
	this->populate();
}

void Deck::populate()
{
	this->clearHand();
	// create standard deck
}

void Deck::shuffle()
{
	//random shuffle
}

void Deck::deal(Hand& aHand)
{

	if (!this->cardVector.empty())
	{
		aHand.add(this->cardVector.back());
		this->cardVector.pop_back();
	}
	else
		std::cout << "Out of cards and unable to deal!" << std::endl;

}

void Deck::additionalCards(GenericPlayer& aGenericPlayer)
{
	while (!aGenericPlayer.isBusted() && aGenericPlayer.isHitting())
	{
		deal(aGenericPlayer);
		// display generic player object top it

		if (aGenericPlayer.isBusted())
			aGenericPlayer.bust();

	}
}
