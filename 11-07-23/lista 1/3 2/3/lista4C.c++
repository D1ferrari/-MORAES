#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string input;

    std::cout << "Digite uma palavra: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "A palavra eh um palindromo." << std::endl;
    } else {
        std::cout << "A palavra nao eh um palindromo." << std::endl;
    }

    return 0;
}
