#include <iostream>
#include <string>
#include <sys/ioctl.h>
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
