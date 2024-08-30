#include <iostream>

using namespace std;

class Person:
    public:
    
    virtual void talk( string personName){
        cout << personName << " is talking" << endl;


    };

class Student: public Person{
    public:
    void talk(string personName){
       cout << " Studen is talking " << endl;
    }
};


int main(){
    system("clear");

    return 0;
}