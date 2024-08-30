#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    system("clear");
    int rankStudents[] = {5, 3, 1, 4, 2};

    // Fixed the declaration and initialization of rankStudents2
    int rankStudents2[] = {5, 3, 1, 4, 2, 6, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18};

    // Corrected the size calculations
    int sizeTotal = sizeof(rankStudents2);
    int sizeElement = sizeof(rankStudents2[0]);
    int numberElements = sizeTotal / sizeElement;

    cout << "Size of rankStudents2 array: " << sizeTotal << endl;
    cout << "Size of element: " << sizeElement << endl;
    cout << "Number of elements: " << numberElements << endl;

    cout << "Original array: ";
    printArray(rankStudents2, numberElements);

    cout << "Original array: ";
    printArray(rankStudents, 5);

    // Bubble sort algorithm
    for(int i=0; i<5; i++){
        for(int j=0; j<5-1; j++){
            if(rankStudents[j] > rankStudents[j+1]){
                int temp = rankStudents[j];
                rankStudents[j] = rankStudents[j+1];
                rankStudents[j+1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    printArray(rankStudents, 5);

    return 0;
}
