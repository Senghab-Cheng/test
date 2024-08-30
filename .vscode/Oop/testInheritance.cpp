#include <iostream>
#include <string>
using namespace std;

// compile time polymorphism
// class Person{
//     public:
//         void talk(string personName){
//             cout << personName << " is talking." << endl;
//         }
//         void talk(int age){
//             cout << "I am " << age << " years old, who talk." << endl;
//         }
// };

// run-time polymorphism
// class Person{
//     public:
//         virtual void talk(string personName){
//             cout << personName << " is studing." << endl; 
//         }
// };

// class Student: public Person{
//     public:
//       void talk(string personName) override{
//         cout << " Student is studying." << endl;
//     }
// };

// int main(){
//     Student student;
//     student.talk("Jonh Hab"); // calls Student's talk method

//     return 0;
// }

double globalCash  = 0.0;

// run-time polymorphism

class BankingService{
    public:

    virtual void deposite(double cash) = 0;
    virtual void withdraw(double cash) = 0;
    virtual void getBalance() = 0;
};

class BankingServiceImpl : public BankingService{
    public:

        void deposite(double cash) override{
            cout << " ++++++++++++++| Bank Dragon Warrior |++++++++++++++++++" << endl;
            bool isLessOrEqualZero = (cash<0 || cash==0) ? true : false;
            if (isLessOrEqualZero){
                cout<< " Invalid deposit amount. Please enter a positive amount."<< endl;

            }else{
                globalCash += cash;
                cout<< "Deposit successful. Current balance: $"<< globalCash << endl;
            }
        }



        void withdraw(double cash)  override{
          if(cash>globalCash) {
            cout << " Insufficient funds. Cannot withdraw."<< endl;
        } else{
            globalCash -= cash;
            cout << "Withdrawal successful. Current balance: $"<< globalCash << endl;
        }
        }

        void getBalance() override{
            cout << " Balance: "<< globalCash << endl;
        }
    
};

    int main(){
        system("clear");
        BankingService * bank =  new BankingServiceImpl();
        bank->deposite(500);
        bank->withdraw(300);
        bank->getBalance();
        bank->deposite(100);
        bank->getBalance();
       


        return 0;
    }