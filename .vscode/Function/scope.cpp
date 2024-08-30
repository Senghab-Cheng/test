#include <iostream>

using namespace std;

int main(){
    system("cls");
    
    string name = "Alex";
    {
        string name = "john";
        int age = 18;
         cout << "Name: " << name << endl;
    }
    cout << "Name: " << name << endl;
    // cout << " Name: " << name << endl;


    
    
    

    return 0;
}