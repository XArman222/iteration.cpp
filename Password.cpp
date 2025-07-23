#include <iostream>
using namespace std;

int main() {
    string correctPassword = "@ecret123";  
    string inputPassword;
    int maxAttempts = 3;
    int attempts = 0;

    while (attempts < maxAttempts) {
        cout << "Enter the password: ";
        cin >> inputPassword;

        if (inputPassword == correctPassword) {
            cout << "Password correct! Access granted." << endl;
            return 0;
        } else {
            attempts++;
            cout << "Wrong password. ";

            if (attempts == maxAttempts) {
                cout << "Too many failed attempts. Access denied." << endl;
                return 1;
            } else {
                cout << "Try again." << endl;
            }
        }
    }

    return 0;
}

Output

Enter the password: sadfgvbhjnmk,l
Wrong password. Try again.
Enter the password: ewdfgh
Wrong password. Try again.
Enter the password: dfghjk
Wrong password. Too many failed attempts. Access denied.
