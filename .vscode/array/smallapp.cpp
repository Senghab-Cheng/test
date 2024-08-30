#include <iostream>

using namespace std;

int main(){
    system("clear");
    int numberStudent;
    cout << "How many students: ";
    cin >> numberStudent;
    // declare array
    string nameList[numberStudent];
    int averageList[numberStudent];
   // assigan value to array
   for (int i = 0; i < numberStudent; i++){
   cout << " Enter your name of student: " << i + 1 << ": ";
   cin >> nameList[i];
   cout << " Enter your average of student: " << i + 1 << ": ";
   cin >> averageList[i];
   }

   // print all elements
   for (int i = 0; i < numberStudent; i++){
    cout << "Name: " << nameList <<endl;
     cout << "Average: " << averageList <<endl;
     cout << "=================== "<< endl;
   }

   

    return 0;
}