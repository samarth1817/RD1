#include <iostream>
#include <cstring>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    char logic[100];

    while (true) {
        // Input values for n and k from the user
        std::cout << "Enter two numbers (enter 0 for both to exit): ";
        std::cin >> n >> k;

        // Check if the user wants to exit
        if (n == 0 && k == 0) {
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "binomial") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 8.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "uowv\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;

            break;
        }

        // Check if k is valid (0 <= k <= n)
        if (k < 0 || k > n) {
            std::cout << "First number should be greater than or equal to the second number." << std::endl;
            continue;
        }

        // Calculate and print the binomial coefficient
        int result = binomialCoefficient(n, k);
        std::cout << result << std::endl;
    }

    return 0;
}
