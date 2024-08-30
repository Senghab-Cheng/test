#include <iostream>

using namespace std;

void menu(){
    cout << "======| Menu |=========" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "0. Exit" << endl;
}
    double add(double a, double b){
    return a + b;
    }
     double subtract(double a, double b){
    return a - b;
     }
     double multiply(double a, double b){
    return a * b;

}


int main(){
    system("clear");
    while(true){
    menu();
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    system("clear");
    switch(choice){
        case 1: {
            double a, b;
            cout << " Enter two number: ";
            cin >> a >> b;
            cout << " Sum: " << add(a, b) << endl;

        }
        case 2: {
            double a, b;
            cout << " Enter two number: ";
            cin >> a >> b;
            cout << " Sum: " << subtract(a, b) << endl;

        }
        case 3: {
            double a, b;
            cout << " Enter two number: ";
            cin >> a >> b;
            cout << " Sum: " << multiply(a, b) << endl;

        }
        case 0: 
          cout << " Exiting..." << endl;
          break;
        default:
        cout << " Invalid Choice" << endl;
        cout << " Please enter valid option" << endl;

        
            
        
    } 
    if (choice == 0){
        break;
    
    }
   }
    return 0;
}