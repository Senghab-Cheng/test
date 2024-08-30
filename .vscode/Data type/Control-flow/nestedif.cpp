#include <iostream>

using namespace std;

int main(){
    system ("clear");

    bool isSecurityallow = true;
    bool isGetTicket = false;
    bool isGetTurn = false;

    if (isSecurityallow)
    {
        cout << " You can enter the bank" << endl;
        if (isGetTicket)
        {
            cout << " Wait for your turn " << endl;
            if (isGetTurn)
            {
                cout << " you can meet the cashier" << endl;
 
            }
            else
            {
                cout << " PLease wait for you turn "<< endl;
            }
        }
        else
        {
            cout << " Pleae get the tacket first " << endl;
        }



    }
    else
    {
        cout << " You can't enter the bank" << endl;
    }


     return 0;

}