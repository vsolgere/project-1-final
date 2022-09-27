#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cctype>

#include "Lexer.h"

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    std::ifstream input;
    input.open(argv[1]);
    std::ostringstream out;
    out << input.rdbuf();
    std::string inputString = out.str();



    lexer->Run(inputString);
    std::cout << lexer->printTokens();

    // TODO

    //delete lexer;

    return 0;
}
