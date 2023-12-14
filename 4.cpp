#include <iostream>
#include <cstring>

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1;

    for (int i = 0; i < n; ++i) {
        std::cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {
    int terms;
    char logic[100];

    while (true) {
        // Input the number of terms from the user
        std::cout << "Enter a number (enter 0 to exit): ";
        std::cin >> terms;

        // Check if the user wants to exit
        if (terms == 0) {
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "fibonacci") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 5.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "ke E\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        // Check if the input is valid
        if (terms < 0) {
            std::cout << "Please enter a non-negative number" << std::endl;
            continue;  // Skip the rest of the loop and start over
        }

        // Generate and print the Fibonacci series
        generateFibonacci(terms);
    }

    return 0;
}
