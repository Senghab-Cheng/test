#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    system("clear");
    // Interger data type
    int A = 42;
    cout<< "A = " << A << endl;
    cout << "Data type of A is: " << typeid(A).name()<< endl;
    cout << "Size of A is: " << sizeof(A) << "bytes" << endl;
  
    char B = 'B';
    cout<< "B = " << B << endl;
    cout << "Data type of B is: " << typeid(B).name()<< endl;
    cout << "Size of B is: " << sizeof(B) << "bytes" << endl;
    // floating  point data type
    float z = 3.141592653589793238462643383279502884197; 
    cout << "z = " << setprecision(12) <<z << endl;
    cout << " Data type of z is: " << typeid(z).name() << endl;

    // Double floating data type 
    double w = 3.141592653589793238462643383279502884197; 
    cout << "w = " << setprecision(12) <<w << endl;
    cout << " Data type of w is: " << typeid(w).name() << endl;

    // boolean data type
    bool isHasMoney = true;
    cout << "Data type of isHasMoney is: " << typeid(isHasMoney).name()<< endl;
    cout << "Size of isHasMoney is: " << sizeof(isHasMoney) << "bytes" << endl;
    
    //short data type
    short F = 38383;
    cout << "F =  " << F << endl;
    cout << "Data type of F is: " << typeid(F).name()<< endl;
    cout << "Size of F is: " << sizeof(F) << "bytes" << endl;

    //long data type
    unsigned long long j = 83728282;
    size_t c = 328383282;
    cout << "j =  " << j << endl;
    cout << "Data type of j is: " << typeid(j).name()<< endl;
    cout << "Size of j is: " << sizeof(j) << "bytes" << endl;






    return 0;

}