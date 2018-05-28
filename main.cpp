#include <iostream>
#include <string>

#include "Commands/Commands.h"

void mainLoop() {
    std::string com;
    while (com!="pnogo") {
        std::cout << "inserici comando: ";
        std::cin >> com;
        execute(getCommand(com));
    }
}

int main() {
    mainLoop();
    return 0;
}