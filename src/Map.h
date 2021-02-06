#pragma once
#include "Weapon.h"
#include "Monster.h"
#include <string>


class Map
{
public:
	Map();
	int getPlayerXPos();
	int getPlayerYPos();
	void movePlayer();
	Monster* checkRandomEncounter();
	void printPlayerPos();
private:
	int mPlayerXPos;
	int mPlayerYPos;
};




