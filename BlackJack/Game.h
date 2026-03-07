#pragma once
#include <string>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
public:
	Game(std::string const& name);
	~Game();
	void play();
private:
	Deck deck;
	House house;
	Player player;
};

