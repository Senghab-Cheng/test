#include <iostream>

using namespace std;

int main(){
    system("clear");
    for(int i =0; i < 10; i++){
        if(i%2 != 0){
            continue; // Skip the current interation

    }
    cout << i << " " ;
    }
    return 0;
}