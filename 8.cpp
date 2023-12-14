#include <iostream>
#include <cmath>
#include <cstring>

// Function to calculate the roots of a quadratic equation
void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << root1 << std::endl;
        std::cout << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Root 1 = Root 2: " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout <<  realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main() {
    double a, b, c;
    char logic[100];

    while (true) {
        // Input coefficients from the user
        std::cout << "Enter three numbers  ";
        std::cout << "(enter 0 0 0 to exit): ";
        std::cin >> a >> b >> c;

        // Check if the user wants to exit
        if (a == 0 && b == 0 && c == 0) {
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "quadratic") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 9.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "kske\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        // Calculate and print the roots
        findRoots(a, b, c);
    }

    return 0;
}
