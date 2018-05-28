#include "Commands.h"

/**
 * Gets the integer corresponding to the function string
 * @param command String name of the function
 * @return Integer corresponding to the function
 */
uint8_t getCommand(std::string command) {
    return COMMANDST[command];
}

/**
 * Executes the command given
 * @param command The integer corresponding to the function
 */
void execute(const uint8_t command) {
    switch (command) {
        case ADD: add(); break;
        case SUB: sub(); break;
        case MUL: mul(); break;
        case DIV: div(); break;
        case JMP: jmp(); break;
        case MOD: mod(); break;
        case SQRT: sqrt(); break;
        case SPQR: spqr(); break;
        default: break;
    }
}

//Commands implementation

void add() {

}

void sub() {

}

void mul() {

}

void div() {

}

void jmp() {

}

void mod() {

}

void sqrt() {

}

void spqr() {

}