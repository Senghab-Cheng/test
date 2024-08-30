#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> ames; // Initialize an empty vector

    ames.push_back("Hello fan fan "); // Add elements using push_back()
    ames.push_back("hob by nv");
    ames.push_back("Goodbye bye");

    for (int i = 0; i < ames.size(); i++) {
        cout << ames[i] << endl;  // Print each element in the vector, with a space after each name
    }

    vector<string> name; // Declare and initialize a new vector named 'name'
    name.push_back("Choice");
    name.insert(name.begin(), "Kang"); // Insert "Kang" at the beginning of the 'name' vector

    cout << "After adding Kang" << endl;
    for (auto i = name.begin(); i < name.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}