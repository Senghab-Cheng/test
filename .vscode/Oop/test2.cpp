#include <iostream>
#include <string>

using namespace std;

class Utils {
    public:
    int sum(int a, int b){
        return a + b;
    }
    int square(int a){
        return a * a;
    }
    double khCurrencyExchange(double reils){
        return reils/4000;
    }
};

int main (){
    system("clear");
    Utils util;
    cout << " Sum: " << util.sum(1,5) << endl;
    cout << " Square: " << util.square((34)*(-34))<< endl;
    cout << " Currency Exchange: " << util.khCurrencyExchange(20000)<< endl;


    return 0;
}