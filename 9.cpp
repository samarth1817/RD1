#include <iostream>
#include <cmath>
#include <cstring>

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int numDigits = 0;

    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    return (sum == number);
}

int main() {
    int number;
    char logic[100];

    while (true) {
        std::cout << "Enter a number \nThis is a ___ number(enter -1 to exit): \n  ";
        std::cin >> number;

        if (number == -1) {
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "armstrongnumber") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 10.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "' XFZSU'\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;

            break;
        }

        if (isArmstrong(number)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
