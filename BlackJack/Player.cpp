#include "Player.h"
#include "GenericPlayer.h"
#include <iostream>

using namespace std;

Player::Player(std::string const& name = "")
{
	this->setName(name);
}

bool Player::isHitting()
{
	string input;

	cout << "Do you wish to hit?" << "\n(y)? or (n)?" << endl;
	cin >> input;

	if (input == "y")
		// hit
		;
	else
		;
		//dont hit
}


bool Player::win()
{
	cout << this->getName() << " has won!" << endl;
}

bool Player::lose()
{
	cout << this->getName() << " has lost!" << endl;
}

bool Player::push()
{
	cout << this->getName() << " has pushed!" << endl;
}