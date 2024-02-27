#include <iostream>
#include <string>

std::string shortestPalindrome(const std::string& s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());

    for (int i = 0; i < s.length(); ++i) {
        if (s.substr(0, s.length() - i) == rev.substr(i)) {
            return rev.substr(0, i) + s;
        }
    }

    return s; // If the input string is already a palindrome
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string result = shortestPalindrome(input);
    std::cout << "Shortest palindrome: " << result << std::endl;

    return 0;
}

