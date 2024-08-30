#include <iostream>

using namespace std;

// int main() {
//     system("clear");
//     int age;
//     cout << " Enter your age: ";
//     cin >> age;

//     if(age >=18) {
//         cout << "you can vote" << endl;
//     }else{
//         cout<< "your cannot vote" << endl;
//         cout<< " you need to be " << 18 -age << " year older than vote"<< endl;
//     }
    int main(){
        system("clear");
        cout << "======| Menu | =======" << endl;
        cout << "1. add product" << endl;
        cout << "2. add remove product" << endl;
        cout << "3. view product" << endl;
        cout << "0. exit" << endl;
        cout << "--------------------" << endl;
        int option;
        cout << " Enter an option: ";
        cin >> option;

        if (option != 0){
            cout<< " The system continue working!" << endl;
        }else{
    
        cout<< " The system will exit!" << endl;
}
    


    return 0;
}
