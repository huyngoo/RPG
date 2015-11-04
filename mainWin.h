#ifndef MAIN_WIN_H
#define MAIN_WIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QVBoxLayout>
#include <QTextDocument>
#include <QComboBox>
#include <string>
#include <QPushButton>
#include <vector>
#include "monster.h"

class mainWin: public QWidget{
	Q_OBJECT
	public:
		mainWin();
		~mainWin();
		void setupDefaultMonsters();
	private slots:
		void createMonster();
		void showMonsterDetails(int monsterIndex);
	private:
		QHBoxLayout* layout;
		QVBoxLayout* userInputLayout;
		QVBoxLayout* monsterDisplayLayout;
		QVBoxLayout* monsterDetailsLayout;
		QComboBox* chooseMonsterType;
		QPushButton* createButton;
		QLabel* ChooseMonsterLabel;
		QListWidget* listMonsters;
		QLineEdit* monsterName;
		QLabel* nameLabel;
		QLabel* HPLabel; 
		QLabel* MPLabel; 
		QLabel* attackLabel; 
		QLabel* defenseLabel;
		std::vector<Monster*> monsterList;
};
#endif