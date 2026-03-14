#include "Hand.h"

Hand::Hand()
{
	cardVector.reserve(7);
}

Hand::~Hand()
{
	clearHand();
}

void Hand::add(Card* cardPtr)
{
	cardVector.push_back(cardPtr);
}

void Hand::clearHand()
{
	std::vector<Card*>::iterator card;
	
	for (card = cardVector.begin(); card != cardVector.end();)
		card = cardVector.erase(card);

	cardVector.clear();

}