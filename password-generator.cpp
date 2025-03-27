#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 

using namespace std;

string generatePassword(int length) {
    const string characters = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()-_=+[]{}|;:,.<>?";

    string password;
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.length()];
    }

    return password;
}

int main() {
    int length;
    cout << "Enter password length: ";
    cin >> length;

    length = abs(length); 

    if (length == 0) {
        cout << "Invalid length. Please enter a number greater than zero.\n";
        return 1;
    }

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
