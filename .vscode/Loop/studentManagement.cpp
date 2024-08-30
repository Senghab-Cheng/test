#include <iostream>
#include <cstdlib> // For system() function

using namespace std;

// Global variables to store registered username and password
string correctUsername;
string correctPassword;

void displayMenu(){
    cout << "===========|Options|===========" << endl;
    cout << "1- Login " << endl;
    cout << "2- Register " << endl;
    cout << "0- Exit " << endl;
    cout << "==============================" << endl;
    cout << " Enter your choice: " << endl;
}

void login(){
    cout << " ======|login|======" << endl;
    string username, password;
    cout << " Enter your username: ";
    cin >> username;
    cout << " Enter your password: ";
    cin >> password;

    while((username != correctUsername) || (password != correctPassword)){
        cout << " Invalid username or password" << endl;
        
        cout << " Enter your username: ";
        cin >> username;
        cout << " Enter your password: ";
        cin >> password;
        cout << "Login successful!" << endl;
    }

    cout << "Login successful!" << endl;
}

void registerUser(){
    cout << " =========| Register |========= " << endl;
    cout << " Enter username: ";
    cin >> correctUsername;
    cout << " Enter password: ";
    cin >> correctPassword;
    cout << "Registration successful!" << endl;
    system("clear"); // Use system("cls"); on Windows
}

int main(){
    system("clear"); // Use system("cls"); on Windows
    int option;
    do{
        displayMenu();
        cin >> option;
        system("clear"); // Use system("cls"); on Windows
        switch(option){
            case 1:
                login();
                break;
            case 2:
                registerUser();
                break;
            case 0:
                cout << " Exiting...... " << endl;
                break;
            default: 
                cout << " Invalid Choice. Please enter your valid choice" << endl;
        }
    } while(option != 0);

    return 0;
}
