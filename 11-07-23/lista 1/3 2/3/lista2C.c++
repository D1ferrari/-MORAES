#include <iostream>
#include <string>

std::string reverseString(const std::string& str) {
    std::string reversedStr;
    int length = str.length();

    for (int i = length - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    return reversedStr;
}

int main() {
    std::string inputString;
    std::cout << "Digite uma palavra: ";
    std::getline(std::cin, inputString);
    std::string reversedString = reverseString(inputString);
    std::cout << "Palavra invertida: " << reversedString << std::endl;

    return 0;
}
