#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char ch;


    while (true) {
        // Input a character
        cout << "Enter a character (enter '0' to exit): ";
        cin >> ch;

        // Check if the user wants to exit
        if (ch == '0') {
            char logic[100];
            cout << "Enter the logic that you have figured out: ";
            cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "ascii") == 0) {
                cout << "You have successfully found out the logic.\n"
                        "The next executable file name is 2.\n"
                        "Keep this encrypted message safe with you and also follow the order:\n"
                        "Wodzp\n";
            }
            int qw;
            cin >>qw;
            cout << qw;
            break;
        }

        // Convert the character to its ASCII value
        int asciiValue = static_cast<int>(ch);

        // Output the ASCII value
        cout << asciiValue << endl;

    }

    return 0;
}
