#include <iostream>
#include <string>
using namespace std;

/*
Create a clas called Utils that has the following methods
1. method name sum that has two parameters for interger total 
2. method name square that has no paramaters for powering number
3. method named khCurrencyExchange that has one parameter for exchange cash from riel to dollar
*/
// Create object of this class and called above methods

// Senario 2
/*  
Create a class called pet that has the following data members
1. the properties(id, name, color, type)
*/
// class Utils{
//     public:
//     int sum ( int a, int b){
//         return a + b;
//     }
//     int square ( int a){
//     return a * a;
//     }
//     double khCurrencyExchange (double riel){
//     return riel / 4000;
//     }
// };  
//     int main (){ 
//         system("clear");
//         Utils util;
//         cout << " sum: " << util.sum(5,3) << endl;
//         cout << " square: " << util.square((5)*-33) << endl;
//         cout << " Currency exchange: " << util.khCurrencyExchange(18000) << endl;
//         return 0;
//     }

class Pet{
    private:
    int id;
    string name;
    string color;
    string type;

    public:
    Pet(int id, string name, string color, string type){
        this->id = id;
        this->name = name;
        this->color = color;
        this->type = type;
    
    }

    Pet(){};
    void getPetDetail(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Type: " << type << endl;
    }
};

int main(){
    system("clear");
    Pet pet(1, "Luna", "Black", "Dog");
    pet.getPetDetail();
    return 0;
}