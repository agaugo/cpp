#ifndef REPLACEFILE_HPP
#define REPLACEFILE_HPP

#include <fstream>
#include <iostream>
#include <string>

class replaceFile {
    private:
        std::string inFile;
        std::string s1;
        std::string s2;
    public:
        replaceFile(std::string inFile, std::string s1, std::string s2);
        int replace(void);
};

#endif