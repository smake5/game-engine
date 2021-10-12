#include <stdio.h>
#include <string>

#include "actor.h"

std::string Actor::to_string()
{
	return "(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")";
}

Actor::Actor(int x, int y)
{
	this->set_pos(x, y);
}

void Actor::set_pos(int x, int y)
{
	this->x = x;
	this->y = y;
}
