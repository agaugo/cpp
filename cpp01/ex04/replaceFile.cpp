#include "replaceFile.hpp"

replaceFile::replaceFile(std::string inFile, std::string s1, std::string s2) : inFile(inFile), s1(s1), s2(s2) {}

int replaceFile::replace(void) {
    std::ifstream ifs(inFile.c_str());
    if (!ifs.is_open()) return 1;

    std::string outFile = inFile + ".replace";
    std::ofstream ofs(outFile.c_str());
    if (!ofs.is_open()) return 1;

    std::string content;
    std::string line;
    while (std::getline(ifs, line)) {
        content += line;
        if (!ifs.eof()) content += "\n";
    }

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
        pos += s2.length();
    }

    ofs << content;
    return 0;
}