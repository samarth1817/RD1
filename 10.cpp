#include <iostream>
#include <cstring>

int main() {
    while (true) {
        int a, b;

        std::cout << "Enter the first integer (or enter 0 to exit): ";
        std::cin >> a;

        // Check if the user wants to exit
        if (a == 0) {
            char logic[100];
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "bitwise") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "' EKTOHT'\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        std::cout << "Enter the second integer: ";
        std::cin >> b;

        // Bitwise AND (&) example
        int result_and = a & b;
        std::cout << result_and << std::endl;
    }

    return 0;
}
