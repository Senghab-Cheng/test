#include <iostream>
using namespace std;

int main() {
    int arr[10];

    // Input values from the user
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Print all the elements of the array
    cout << "Array elements are: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
