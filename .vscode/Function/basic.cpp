#include <iostream>

using namespace std;

// 1. Funtion prototype
// Function has no return value and no parameter
void printGreeting();
// Type 1: Function has no return value and has parameter
void smartGreeting (string name);

// Type 2: Function  has no return value and paramater
void smartGreeting(string name, int pin);
// Type 3: Function has return value and has no parameter
float getBalance();
// Type 4: Function has return value and has parameter
float calculateTax( float slary);
int main(){
    system("clear");
    // string name;
    // int pin;
    // // 3. call funtion
    // printGreeting();
    //     // value "Alex" is an argument
    //     smartGreeting("Alex",123456);
    //     string name = "Sila";
    //     smartGreeting(name,12345);

        //  // void ទទ
        //  cout << " Enter your name: ";
        //    getline(cin, name);
        //  cout << " Enter your pin: ";
        //  cin >> pin;
        //  //call the function
        //  smartGreeting(name, pin);
    
    float salary = getBalance();
    float paidTax = calculateTax(salary);
    cout << " your salary is: " << salary << "$" << endl;
    cout << " you have to pay tax: "  <<paidTax<< endl;

    return 0;
    } 
    
    float calculateTax( float salary) {
        float tax = 0.2;
        return salary * tax;
    }
float getBalance(){
    return 100.0 + 50.0;
}

// 2.funtion defination
void printGreeting(){
    cout<< "Hello from funtion updated"<< endl;

}
//string name is a paramater
      void smartGreeting(string name, int pin){

     
      
        if (pin == 12345)
        {
      cout<< " Hello " << name << " from hotel"<< endl;
      }else{
        cout<< " your are not allowed to the hotel"<< endl;

      }

      }
   