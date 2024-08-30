#include <iostream>

using namespace std;

int main(){
    system("clear");
    float marks[5];
    marks[0]= 90.5;
    marks[1]= 80.5;
    marks[2]= 70.5;
    marks[3]= 60.5;
    marks[4]= 50.5;

    cout << " Size of mark array: " << sizeof(marks) <<endl;
    cout << "Address of marks array: " << &marks << endl;
    cout << "Address of marks[0]: " << &marks[0] << endl;
    cout << "Address of marks[1]: " << &marks[1] << endl;
    cout << "Address of marks[2]: " << &marks[2] << endl;
    cout << "Address of marks[3]: " << &marks[3] << endl;
    cout << "Address of marks[4]: " << &marks[4] << endl;

    // acess 2nd element of the array by using + operator
    cout << " 2nd element of the array: "<< *(marks + 4) << endl;

    

    return 0;
}