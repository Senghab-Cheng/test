#include <iostream>

using namespace std;
void kofint(int a, int b){
    int sum =  a+ b;
    cout << "Kof: " << sum << endl;
}
void kofint(double a, double b){
    int sum = a - b;
    cout << "Kof: " << sum << endl;
}
void kof(int x, int y){
    int sum = x / y;
    cout << "Kof: " << sum << endl;
}
    void kof (double x, double y){
        double sum = x * y; 
        cout << "Kof: " << sum << endl;
    }
int main (){
    system("clear");
    kofint(0,0);
    kofint(5.4,2.3);
    kof(10,5);
    kof(10.5, 5.3);
    
    return 0;

}