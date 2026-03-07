#pragma once
class Card
{
	public:	
		enum RANK 
		{
			ACE,
			TWO,
			THREE,
			FOUR,
			FIVE,
			SIX,
			SEVEN,
			EIGHT,
			NINE,
			TEN,
			JACK,
			QUEEN,
			KING
		};
		enum SUIT
		{
			CLUBS,
			DIAMONDS,
			HEARTS,
			SPADES
		};
		Card(RANK rank = ACE, SUIT suit = SPADES, bool isUp = true);
		void flip();
		int getValue();
	private:
		bool isFaceUp;
	protected:
		RANK rank;
		SUIT suit;
};

