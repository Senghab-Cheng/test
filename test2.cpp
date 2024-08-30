#include <iostream>
using namespace std;

// Function to convert USD to KHR
int USDToKHR(int usd) {
    return usd * 4000;
}

// Function to convert KHR to USD
int KHRToUSD(int khr) {
    return khr / 4000;
}

// Function to convert EUR to USD
int EURToUSD(int eur) {
    return eur * 1.2;  

// Function to display the menu
void menu() {
    cout << "=====| Currency Converter |=====" << endl;
    cout << "1- USD to KHR" << endl;
    cout << "2- KHR to USD" << endl;
    cout << "3- EUR to USD" << endl;
    cout << "01- Exit" << endl;
}

int main() {
    system("clear");  
    menu();

    cout << "Enter option: ";
    int option;
    cin >> option;

    int amount;
    switch (option) {
        case 1: {
            cout << "Enter amount in USD: ";
            cin >> amount;
            cout << amount << " USD = " << USDToKHR(amount) << " KHR" << endl;
            break;
        }
        case 2: {
            cout << "Enter amount in KHR: ";
            cin >> amount;
            cout << amount << " KHR = " << KHRToUSD(amount) << " USD" << endl;
            break;
        }
        case 3: {
            cout << "Enter amount in EUR: ";
            cin >> amount;
            cout << amount << " EUR = " << EURToUSD(amount) << " USD" << endl;
            break;
        }
        case 0: {
            cout << "Goodbye!" << endl;
            break;
        }
        default: {
            cout << "Invalid option!" << endl;
        }
    }

    return 0;
}
