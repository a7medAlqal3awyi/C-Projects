#include <iostream>
#include <string>
#include <map>

using namespace std;

struct User {
    string username;
    string password;
};

void registerUser(map<string, User>& users);
bool loginUser(const map<string, User>& users, string username, string password);

int main() {
    map<string, User> users;
    while (true) {
        cout << "1. Register\n2. Login\n3. Exit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser(users);
                break;
            case 2: {
                string username, password;
                cout << "Enter your username: ";
                cin >> username;
                cout << "Enter your password: ";
                cin >> password;

                if (loginUser(users, username, password)) {
                    cout << "Login successful!\n";
                } else {
                    cout << "Invalid username or password.\n";
                }
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

void registerUser(map<string, User>& users) {
    User newUser;
    cout << "Enter your username: ";
    cin >> newUser.username;

    if (users.find(newUser.username) != users.end()) {
        cout << "Username already taken. Please choose a different one.\n";
        return;
    }

    cout << "Enter your password: ";
    cin >> newUser.password;

    users[newUser.username] = newUser;

    cout << "Registration successful!\n";
}

bool loginUser(const map<string, User>& users, string username, string password) {
    auto it = users.find(username);
    if (it != users.end()) {
        if (it->second.password == password) {
            return true;
        }
    }
    return false;
}
