#include <iostream>
#include <cmath> // Include the cmath header for pow function
#include <cstring>

// Function to calculate the nth term of a GP
double calculateGPTerm(double firstTerm, double commonRatio, int termNumber) {
    return firstTerm * std::pow(commonRatio, termNumber - 1);
}

int main() {
    while (true) {
        // Unconventional GP parameters
        double a = 2.0;
        double r = 3.0;

        int n;

        // Confusing user prompt
        std::cout << "Enter a number (enter 0 to exit): ";
        std::cin >> n;

        // Check if the user wants to exit
        if (n == 0) {
            char logic[100];
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "gp") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 7.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "gwk d\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        // Calculate and display the nth term of the mysterious sequence
        double result = calculateGPTerm(a, r, n);
        std::cout << result << std::endl;
    }

    return 0;
}
