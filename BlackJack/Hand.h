#pragma once
#include "Card.h"
#include <vector>

class Hand
{
	public:
		Hand();
		void add(Card* cardPrt);
		virtual ~Hand();
		void clearHand();
		int getTotal();
		std::vector<Card*> cardVector;
};

