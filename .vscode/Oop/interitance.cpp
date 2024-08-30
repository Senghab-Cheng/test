#include <iostream>
#include <string>

using namespace std;

class Engine{

    void speedUp(){
        cout << " Speeding up" << endl;
    
    }
    void slowDown(){
        cout << "Slowing down" << endl;
    }
};
class Car: public Engine{
    private:
      int id;
      string brand;
      int releasedYear;
    public:
      Car(int id, string brand, int releasedYear){
            this->id = id;
            this->brand = brand;
            this->releasedYear = releasedYear;
        }

    void getDetails(){
        cout << "ID: " << id << endl;
        cout << "Brand: " << brand << endl;
        cout << "Year: " << releasedYear << endl;

    }
};

class Vechicle: public Engine{
};

int main(){
    system("clear");


    car BMW (1, " BMW", 3003);
    BMW.getDetails();
    BMW.speedUp();
    BMW.slowDown();

    //

    Vechicle d;
    d.speedUp();
    d.slowDown();
    return 0;
}