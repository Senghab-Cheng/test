#include <iostream>

using namespace std;

int main (){
    system("clear");
    string name;
    int age;
    string className;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter Your age: " ;
    cin >> age;
    cout << " Enter your className: " ;
    cin >> className;

    cout << " =================| Student Information|===================="<< endl;
    cout << " Name: " << name << endl;
    cout << " Age: " << age << endl;
    cout << " ClassName: " << className << endl;
    return 0;


}