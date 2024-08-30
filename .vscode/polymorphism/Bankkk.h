#pragma once
#include"BankService.h"
#include <iostream>

using namespace std;
double globalCash = 0.0;

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