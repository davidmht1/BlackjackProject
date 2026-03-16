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

int Hand::getTotal()
{
	if (cardVector.empty())
		return 0;
	if (cardVector[0]->getValue())
		return 0;

	std::vector<Card*>::iterator card;
	int total = 0;

	for (card = cardVector.begin(); card != cardVector.end(); ++card)
	{
		total += (*card)->getValue();
	}

	bool ace = false;
	for (card = cardVector.begin(); card != cardVector.end(); ++card)
	{
		if ((*card)->getValue() == 1)
			ace == true;
	}
	if (total <= 11 && ace)
		total += 11;

	return total;

}