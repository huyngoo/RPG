#include <QApplication>

#include "monster.h"
#include "goblin.h"
#include "mainWin.h"
using namespace std;
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	mainWin monsterWindow;
	monsterWindow.show();

	return app.exec();
}