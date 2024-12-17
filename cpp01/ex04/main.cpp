#include "sed.hpp"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "Incorrect input." << std::endl;
        return (1);
    }
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open()) {
        std::cout << "Could not open file" << std::endl;
        return (1);

    }
    std::string newFile = std::string(argv[1]) + ".replace";
    std::ofstream outFile(newFile);
    std::string line;
    while (std::getline(inFile, line)) {
        outFile << line << std::endl;
    }

    inFile.close();
    outFile.close();
    return (0);
}

/*

> Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.

> It will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.

> Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class std::string 
  are allowed, except replace. Use them wisely!

*/