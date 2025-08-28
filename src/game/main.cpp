#include <iostream>
#include <ncurses.h>
#include "CommandHandler.h"
#include "InfoScreens.h"

int main(){
	system("clear");
	StartScreen();
	GetCommand();
	return 0;
}
