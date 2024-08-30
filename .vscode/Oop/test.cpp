#include <iostream>
#include <string>

using namespace std;

class User {
private:
    int id;
    string name;
    string email;
    int password;
    string profile;
    bool isDeleted;
    bool isVerified;

public:
    void setData(int id, string name, string email) {
        this->id = id;
        this->name = name;
        this->email = email;
        this->isDeleted = true;
        this->isVerified = true;
    }

    void displayData() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Profile: " << profile << endl;
        cout << "Deleted: " << (isDeleted ? "True" : "False") << endl;
        cout << "Verified: " << (isVerified ? "True" : "False") << endl;
    }
};

int main() {
    system("clear");
    int numUser;
    User* user = new User[numUser];

    cout << "Enter user number: ";
    cin >> numUser;

    for (int i = 0; i < numUser; i++) {
        int id;
        string name;
        string email;
        string profile;
        bool isDeleted = false;
        bool isVerified = false;
        cout << "Enter user ID: " << i + 1 << " : ";
        cin >> id;
        cout << "Enter user Name: " << i + 1 << " : ";
        cin >> name;
        cout << "Enter user email: " << i + 1 << " : ";
        cin >> email;
        cout << "Enter user profile: " << i + 1 << " : ";
        cin >> profile;
        cout << "Enter isDeleted (1 for Yes, 0 for No) for User " << i + 1 << " : ";
        cin >> isDeleted;
        cout << "Enter isVerified (1 for Yes, 0 for No) for User " << i + 1 << " : ";
        cin >> isVerified;

        user[i].setData(id, name, email);

        cout << "\nUser Data:\n";
        user[i].displayData();

        switch (isDeleted) {
            case 1:
                cout << "Enter your isDeleted: True" << endl;
                break;
            case 0:
                cout << "Enter your isDeleted: False" << endl;
                break;
        }

        switch (isVerified) {
            case 1:
                cout << "Enter your isVerified: True" << endl;
                break;
            case 0:
                cout << "Enter your isVerified: False" << endl;
                break;
        }
    }

    delete[] user;

    return 0;
}