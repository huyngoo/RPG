#ifndef MONSTER_H
#define MONSTER_H
#include<map>
#include<vector>
#include<string>

class Monster{
	public:
		Monster();
		Monster(std::string type, int currHP_, int maxHP_);
		~Monster();
		void display() const;
		void setCurrHP_(int dmg);
		void setAttack_(int value);
		void setDefense_(int value);
		void setMaxHP_(int value);
		void setMP_(int value);
		void gainExp_(int gainz);
		void setName_(std::string name);
		int getCurrHP_();
		int getAttack_();
		int getDefense_();
		int getMaxHP_();
		int getMP_();
		std::string getName_();
		std::string killOther();
		
	private:
		int currHP_;
		int maxHP_;
		int attack_;
		int defense_;
		int MP_;		
		int exp_;
		int monster_level_;
		std::string name_;
		std::string type_;
		std::map<std::string,int> moves;
		std::map<std::string,int> monstersKilled;
		std::map<int, int> levels_;
};
#endif