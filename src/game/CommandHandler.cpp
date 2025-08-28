#include <iostream>
#include <string>
#include <algorithm>
#include "CommandHandler.h"
#include "InfoScreens.h"

enum Commands {
    CLEAR,
    EXIT,
    HELP
};

std::string toLower(const std::string& str) {
    std::string res = str;
    std::transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
}

int ParseCommand(const std::string& input) {
    std::string cmd = toLower(input);
    if (cmd == "clear") return CLEAR;
    if (cmd == "exit") return EXIT;
    if (cmd == "help") return HELP;
    return -1;
}

void GetCommand() {
    while (true) {
        std::string input;
        std::cout << "> ";
        std::getline(std::cin, input);

        Commands command = static_cast<Commands>(ParseCommand(input));

        switch (command) {
            case CLEAR:
                system("clear");
                break;
            case EXIT:
                system("clear");
                exit(0);
            case HELP:
                Help();
                break;
            default:
                std::cout << "Unknown command" << std::endl;
                break;
        }
    }
}
