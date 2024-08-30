#include <iostream>

using namespace std;

int main(){
    system("clear");
    int value[]= {1,2,3,3,4,5,6,7,8,9};
    int n = sizeof(value)/sizeof(value[0]);
    int element;
    cout << "Enter the element you want to delete: ";
    cin >> element;

    for(int i=0; i<n; i++){
        // serch for the element
        if(element==value[i]){
            // replece the element with the next element
            for(int j=i; j<n-1; j++){
                value[j] = value[j+1];
            }
            n--; // decrease the size of the array
            // i--; // recheck the current index
            break;

        }
    }
       cout << " Array after deleted element: " << endl;
       for(int i=0; i<n; i++){
        cout << value[i] << " ";
    }

    return 0;
}