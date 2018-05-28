#ifndef PNOGOL_COMMANDS_H
#define PNOGOL_COMMANDS_H

#include <string>
#include <unordered_map>

//Commands int const
enum COMMANDS {
    ADD,
    SUB,
    MUL,
    DIV,
    JMP,
    MOD,
    SQRT,
    SPQR
};

//Commands string to int
static std::unordered_map<std::string, uint8_t> COMMANDST {
        {"ADD",ADD},
        {"SUB",SUB},
        {"MUL",MUL},
        {"DIV",DIV},
        {"JMP",JMP},
        {"MOD",MOD},
        {"SQRT",SQRT},
        {"SPQR",SPQR}
};

//Utility
void execute(uint8_t command);
uint8_t getCommand(std::string command);

//Commands
void add();
void sub();
void mul();
void div();
void jmp();
void mod();
void sqrt();
void spqr();


#endif //PNOGOL_COMMANDS_H
