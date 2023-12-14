#include <iostream>
#include <cctype>
#include <cstring>

int countVowels(const std::string& word) {
    int vowelCount = 0;

    for (char ch : word) {
        char lowercaseChar = std::tolower(ch);
        if (std::isalpha(lowercaseChar) && (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u')) {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    std::string word;
    char logic[100];

    while (true) {
        std::cout << "Enter a word (enter -1 to exit): ";
        std::cin >> word;

        if (word == "-1") {
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "vowel") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 3.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "xz ao\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        int vowels = countVowels(word);

        std::cout << vowels << std::endl;
    }

    return 0;
}
