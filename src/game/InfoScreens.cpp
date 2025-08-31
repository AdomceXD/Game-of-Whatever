#include <iostream>
#include <string>
#include <sys/ioctl.h>
#include <ctime>
#include <random>
#include "InfoScreens.h"

void ScreenSplit(int a){
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    int leftMargin = w.ws_col / 2 - a;
    for (int i=0;i<leftMargin;i++){
        std::cout << ' ';
    }
    //How this works: Take the length of your text, devide by 2 and insert the function next to the text.
}

void Help(){
printf("List of commands:\nHelp - Display help screen\nClear - Clear screen\nExit - Exit game\n");
}

void Stats(){

}

void Credits(){
system("clear");
printf("Credits: Game made by AdomceXD.\nCopyright blahblahblah\n");
}

void TipOfTheDay() {
	srand(time(NULL));
    static const std::string totd[] = {
        "Thank you for playing the game",
        "Hi mom!",
        "Strange game, isn't it?"
    };
    std::string totdchoice = totd[rand() % 3];
    printf("Tip of the day: %s \n", totdchoice.c_str());
}

void StartScreen(){
ScreenSplit(16);
printf("  ________       __      __     \n");ScreenSplit(16);
printf(" /  _____/  ____/  \\    /  \\  \n");ScreenSplit(16);
printf("/   \\  ___ /  _ \\   \\/\\/   /\n");ScreenSplit(16);
printf("\\    \\_\\  (  <_> )        /  \n");ScreenSplit(16);
printf(" \\______  /\\____/ \\__/\\  /  \n");ScreenSplit(16);
printf("        \\/             \\/     \n");
}

void SelectStart(){
int i;
StartScreen();
printf("\n\n");
TipOfTheDay();
printf("1.Start game\n2.Credits\n3.Exit game\n\n> ");
std::cin >> i;
switch (i){
	case 1:
	system("clear");
	break;
	case 2:
	Credits();
	break;
	case 3:
	exit(0);
	default:
	printf("Invalid option");
	exit(0);
}

}
