#include "Card.h"

Card::Card(RANK rank, SUIT suit, bool isUp)
{
	this->rank = rank;
	this->suit = suit;
	this->isFaceUp = isUp;
}

// Return the value of cards
int Card::getValue()
{
	if (!isFaceUp)
		return 0;

	switch (rank)
	{
		case ACE: return 11;
		case TWO: return 2;
		case THREE: return 3;
		case FOUR: return 4;
		case FIVE: return 5;
		case SIX: return 6;
		case SEVEN: return 7;
		case EIGHT: return 8;
		case NINE: return 9;
		default: return 10;
	}
}
//Flips the card state.
void Card::flip()
{
	isFaceUp = !isFaceUp;
}