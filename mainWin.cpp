#include "monster.h"
#include "mainWin.h"
#include "goblin.h"
#include <QString>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTextCursor>
#include <QTextListFormat>
#include <vector>

mainWin::mainWin(){
	layout = new QHBoxLayout();
    userInputLayout = new QVBoxLayout();
    monsterDisplayLayout = new QVBoxLayout();
    monsterDetailsLayout = new QVBoxLayout();
 	createButton = new QPushButton("Create Monster!");
 	listMonsters = new QListWidget();
 	monsterName = new QLineEdit();
 	nameLabel = new QLabel();
 	attackLabel = new QLabel();
 	defenseLabel = new QLabel();
 	HPLabel = new QLabel();
 	MPLabel = new QLabel();
 	monsterName->setText("Enter a name for your monster!");
 	setupDefaultMonsters();
	layout->addLayout(userInputLayout);
	layout->addLayout(monsterDisplayLayout);
	layout->addLayout(monsterDetailsLayout);
	userInputLayout->addWidget(monsterName);
	userInputLayout->addWidget(ChooseMonsterLabel);
	userInputLayout->addWidget(chooseMonsterType);
	userInputLayout->addWidget(createButton);
	monsterDisplayLayout->addWidget(listMonsters);
	monsterDetailsLayout->addWidget(nameLabel);
	monsterDetailsLayout->addWidget(HPLabel);
	monsterDetailsLayout->addWidget(MPLabel);
	monsterDetailsLayout->addWidget(attackLabel);
	monsterDetailsLayout->addWidget(defenseLabel);
	setLayout(layout);
	connect(createButton, SIGNAL(clicked()),this, SLOT(createMonster()));
	connect(listMonsters,SIGNAL(currentRowChanged(int)), this, SLOT(showMonsterDetails(int)));
}
mainWin::~mainWin(){
	for(std::vector<Monster*>::iterator it=monsterList.begin(); it!= monsterList.end();++it){
		delete *it;
	}
}

void mainWin::setupDefaultMonsters(){
	ChooseMonsterLabel = new QLabel("Choose your monster type");
	chooseMonsterType = new QComboBox();
	chooseMonsterType->addItem("Goblin");
	chooseMonsterType->addItem("Mage");
	chooseMonsterType->addItem("Cookie Monster");
}

void mainWin::createMonster(){
	if(chooseMonsterType->currentText() == "Goblin"){
		Goblin* gob = new Goblin(monsterName->text().toStdString());
		monsterList.push_back(gob);
		listMonsters->addItem(monsterName->text());
	}
}

void mainWin::showMonsterDetails(int monsterIndex){
	//monsterDetails = textEdit->monsterDetails();
	nameLabel->setText("Name: " + QString::fromStdString(monsterList[monsterIndex]->getName_()));
	HPLabel->setText("HP: " + QString::number(monsterList[monsterIndex]->getMaxHP_()));
	MPLabel->setText("MP: " + QString::number(monsterList[monsterIndex]->getMP_()));
	attackLabel->setText("Attack: " + QString::number(monsterList[monsterIndex]->getAttack_()));
	defenseLabel->setText("Defense: " +QString::number(monsterList[monsterIndex]->getDefense_()));
}