#include "Card.h"

Card::Card(RANK rank = ACE, SUIT suit = SPADES, bool isUp = true)
{
	this->rank = rank;
	this->suit = suit;
	this->isFaceUp = isUp;
}

int Card::getValue()
{
	if (isFaceUp)
	{
		switch (suit) 
		{
		case ACE:
			return 11;
		case TWO:
			return 2;
		case THREE:
			return 3;
		case FOUR:
			return 4;
		case FIVE:
			return 5;
		case SIX:
			return 3;
		case SEVEN:
			return 4;
		case EIGHT:
			return 5;
		case NINE:
			return 9;
		default:
			return 10;
		}
	}
	return 0;
}

void Card::flip()
{
	if (!isFaceUp)
		isFaceUp = true;
	// else print card is already up?
}
