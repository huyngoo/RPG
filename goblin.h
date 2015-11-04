#ifndef GOBLIN_H
#define GOBLIN_H
#include "monster.h"
#include <map>
#include <string>

class Goblin: public Monster{
	public:
		Goblin(std::string name);
		~Goblin();
};
#endif