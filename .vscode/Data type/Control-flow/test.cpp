#include <iostream>

using namespace std;

void Exchange(){
    cout << "======|Exchange Money|=========" << endl;
    cout << " 1- USD Exchange to khemr " << endl;
    cout << " 2- Khmer Exchange to USD " << endl;
    cout << " 3- Euro Exchange to  USD" << endl;
    cout << " 0- Exit" << endl;


}

int main(){
    system("clear");
    menu(); // Display the menu

    int option;
    cin >> option;

    switch(option){
        case 1: {
            cout << "" << endl;
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