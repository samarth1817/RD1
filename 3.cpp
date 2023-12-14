#include <iostream>
#include <cstring>

using namespace std;

bool checkYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year;
    char logic[100];

    while (true) {
        cout << "Enter a 4 digit number (enter -1 to exit): ";
        cin >> year;

        if (year == -1) {
            cout << "Enter the logic that you have figured out: ";
            cin >> logic;

            // Convert the logic string to lowercase
            for (int i = 0; i < strlen(logic); i++) {
                logic[i] = tolower(logic[i]);
            }

            if (strcmp(logic, "leapyear") == 0) {
                cout << "You have successfully found out the logic.\n"
                        "The next executable file name is 4.\n"
                        "Keep this encrypted message safe with you and also follow the order:\n"
                        "rpil\n";
            }
            int qw;
            std::cin >> qw;
            std::cout << qw;
            break;
        }

        if (checkYear(year)) {
            cout << "YES" << endl;
        } else {
            cout <<  " NO" << endl;
        }
    }

    return 0;
}
