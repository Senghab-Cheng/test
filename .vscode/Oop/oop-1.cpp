#include<iostream>
#include<string>

using namespace std;

class Person {
    private:
        int age;
        string name;
        string email;
    public:
        void setData(int age, string name, string email) {
            this->age = age;
            this->name = name;
            this->email = email;
        }
        void displayData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Email: " << email << endl;
        }
};

int main() {
    const int numPeople = 5;
    Person people[numPeople];

    for (int i = 0; i < numPeople; i++) {
        int age;
        string name;
        string email;

        cout << "Enter data for person " << i + 1 << ":" << endl;
        cout << "Age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Name: ";
        getline(cin, name);
        cin.ignore();
        cout << "Email: ";
        getline(cin, email);
        cin.ignore();

        people[i].setData(age, name, email);
        people[i].displayData();
        cout << endl;
    }

    return 0;
}