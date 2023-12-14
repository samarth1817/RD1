#include <iostream>
#include <cstring>

int main() {
    while (true) {
        int size;
        char logic[100];

        std::cout << "\nEnter the number of values you want to enter (enter 0 to exit): ";
        std::cin >> size;

        // Check if the user wants to exit
        if (size == 0) {
            std::cout << "Enter the logic that you have figured out: ";
            std::cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "evenodd") == 0) {
                std::cout << "You have successfully found out the logic.\n"
                            "The next executable file name is 6.\n"
                            "Keep this encrypted message safe with you and also follow the order:\n"
                            "pa i\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        int arr[size];

        std::cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            std::cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                sum += arr[i]; // Add even numbers
            } else {
                sum -= arr[i]; // Subtract odd numbers
            }
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
