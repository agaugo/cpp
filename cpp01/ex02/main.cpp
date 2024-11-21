#include <iostream>
#include <string>

int main(void) {
    std::string s = "HI THIS IS BRAIN";
    std::string* stringPTR = &s;
    std::string& stringREF = s;

    std::cout << "Memory address of the string variable: " << &s << "\n";
    std::cout << "Memory address held by stringPTR:      " << stringPTR << "\n";
    std::cout << "Memory address held by stringREF:      " << &stringREF << "\n";

    std::cout << "Value of string variable:              " << s << "\n";
    std::cout << "Value pointed to by stringPTR:         " << *stringPTR << "\n";
    std::cout << "Value pointed to by stringREF:         " << stringREF << "\n";

    return (0);
}