#include "monster.h"
#include <iostream>
#include <map>

Monster::Monster():exp_(0), monster_level_(0){};
Monster::Monster(std::string type, int hp, int maxHP){ 
	type_ = type; 
	currHP_ = hp;
	maxHP_ = maxHP;
}
Monster::~Monster(){};
void Monster::display() const{
	std::cout << "Name: " << name_ <<std::endl;
	std::cout << "Type: " << type_ <<std::endl;
	std::cout << "Current HP: " << currHP_ << "/" << maxHP_<<std::endl;
	std::cout << "MP: " << MP_ << std::endl;
	std::cout << "Attack Power: "<<attack_<<std::endl;
	std::cout << "Defense: " << defense_<<std::endl;
	std::cout << "Level: " << monster_level_ << std::endl;	
}
void Monster::setCurrHP_(int dmg){
	currHP_ = currHP_-dmg;
}
void Monster::setAttack_(int value){
	attack_ = value;
}
void Monster::setDefense_(int value){
	defense_ = value;
}
void Monster::setMaxHP_(int value){
	maxHP_ = value;
}
void Monster::setMP_(int value){
	MP_ = value;
}
void Monster::gainExp_(int gainz){
	exp_ = exp_ + gainz;
}
void Monster::setName_(std::string name){
	name_ = name;
}
int Monster::getCurrHP_(){
	return currHP_;
}
int Monster::getAttack_(){
	return attack_;
}
int Monster::getMP_(){
	return MP_;
}
int Monster::getDefense_(){
	return defense_;
}
int Monster::getMaxHP_(){
	return maxHP_;
}
std::string Monster::getName_(){
	return name_;
}