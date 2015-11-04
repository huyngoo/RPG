#include "goblin.h"
#include <iostream>

Goblin::Goblin(std::string name): Monster("Goblin", 50, 50){
	setName_(name);
	setMP_(10); 
	setAttack_(15);
	setDefense_(5);
};
Goblin::~Goblin(){};