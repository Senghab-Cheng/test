#include <iostream>

using namespace std;

int sumSeries(int n){
    int sum = 0;
    for (int i =1; i<= n; i++){
    sum+= i;
    }
    return sum;
}
int factorial(int n){
    cout << n << "! = ";
    int fact = 1;
    for(int i= n; i >= 1; i--){
        fact*= i;
        cout << i << " ";
        if(i== 1){
            cout << " ";
        }else{
            cout << "*";
        }
        cout << " = " << fact << endl;
        return fact;

    }

}




// void sorrymessage(){
//     cout << "hello world" << endl;


int main(){
    system("clear");
    // for(int i=0; i < 100; i++){
    //     cout << i +1 << endl;
    //     sorrymessage();
    // }

    // cout << "hello world" << endl;
   cout << sumSeries(100) << endl;
   factorial(5);
   

    return 0;
}