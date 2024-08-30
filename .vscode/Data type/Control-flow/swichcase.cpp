#include <iostream>

using namespace std;

void menu(){
    cout << "=========| Pizza menu |========" << endl;
    cout << "1- Buy pizza" << endl;
    cout << "2- Buy drink" << endl;
    cout << "3- Buy pizza and drink" << endl;
    cout << "0- Exit" << endl;
}

int main (){
    // system("cls"); // Optional: clears the screen
    menu(); // Display the menu
    int option;
    cin >> option;

    switch(option){
        case 1: {
            cout << "You bought a pizza" << endl;
            break;
        }
        case 2: {
            cout << "You bought a drink" << endl;
            break;
        }
        case 3: {
            cout << "You bought a pizza and drink" << endl;
            break;
        }
        case 0: {
            cout << "Goodbye" << endl;
            break;
        }
        default: {
            cout << "Invalid Option" << endl;
        }
    }

    return 0;
}
