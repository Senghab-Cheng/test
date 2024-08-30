#include <iostream>

using namespace std;

int main(){
    system("clear");
    cout << "Enter your score: ";
    int score;
    cin >> score;
    // range in Switch case 
    switch(score);
       case 90 ... 100: {
        cout << "Grade A" << endl;
        break;
    
       }
       case 80 ... 89: {
        cout << "Grade B" << endl;
        break;
    
       }
       case 70 ... 79: {
        cout << "Grade C" << endl;
        break;
    
       }
}
        default: {
    cout << " Grade F" << endl;
}
       
       


    return 0;
}