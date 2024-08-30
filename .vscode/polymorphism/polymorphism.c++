#include <iostream>
#include <string>
#include "BankService.h"
#include "Bankkk.h"

using namespace std;







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