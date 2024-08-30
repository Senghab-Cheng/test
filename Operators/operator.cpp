#include <iostream>

using namespace std;

int main(){
    system("clear");
    int age;
    string nationality;

    cout << "====| Driving Lision|=====" << endl;
    cout << " Enter your age: ";
    cin >> age;
    cout << " Enter your nationality: ";
    cin >> nationality;

    bool condition1 = (age >= 18);
    bool condition2 = !( nationality == "khmer" || nationality == "Khmer");

    // use logical operator
    if( condition1 && condition2){
        cout << " you can drive" << endl;
    }else{
         cout << " you can't drive" << endl;

    }
       
    


}