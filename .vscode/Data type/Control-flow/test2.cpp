#include <iostream>

using namespace std;

    int USDToKHR (int usd){
        return usd * 4000;
    }
    int KHRToUSD (int khr){
        return khr / 4000;
    }
    int EURToUSD (int eur){
        return eur * 1.2;
    }

    void menu(){
        cout << "===========|Exchange Money|============="<< endl;
        cout <<"1- USD to KHR"<< endl;
        cout <<"2- KHR to USD"<< endl;
        cout <<"3- EUR to USD"<< endl;
        cout <<"0- Exit" << endl;
    }
    int main(){
        system("clear");
        menu();

        cout << "Enter option: ";
        int option;
        cin >> option;

        int amount;
        switch (option){
            case 1: {
                cout << " Enter your amount in USD: ";
                cin >> amount;
                cout << amount << "USD= " << USDToKHR(amount) << "KHR" << endl;
                break;
            }
            case 2: {
                cout << " Enter your amount in KHR: ";
                cin >> amount;
                cout << amount << "KHR= " << KHRToUSD(amount) << "USD" << endl;
                break;
            }
            case 3: {
                cout << " Enter your amount in EUR: ";
                cin >> amount;
                cout << amount << "EUR= " << EURToUSD(amount) << "USD" << endl;
                break;
            }
            case 0: {
                cout << "Goodbye my beloved customer!" << endl;
                break;
            }
            default: {
            cout << " Invalid Option " << endl;
            }
        }

    
      return 0;

    }


