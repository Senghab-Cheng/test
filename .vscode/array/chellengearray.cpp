#include <iostream>

using namespace std;

void printArray(string name[], float salary[], int size){
    cout << "Employee Name\t\tSalary" << endl;
    for(int i=0; i<size; i++){
        cout << name[i] << "\t\t" << salary[i] << endl;
    }
    cout << endl;
}

int main(){
    system("cls");
    string employeeNames[] ={
        "John",
        "Doe",
        "Jane",
        "Alex",
        "Mary"
    };
    float employeeSalaries[] = {
        1000.50,
        4000.75,
        2000.75,
        5000.25,
        3000.25
    };

    int sizeTotal = sizeof(employeeNames);
    int sizeElement = sizeof(employeeNames[0]);
    int numberElements = sizeTotal / sizeElement;

    cout << "Original array: " << endl;
    printArray(employeeNames, employeeSalaries, numberElements);
    
    // code for sort employee salaries in ascending order
    // write code here
    for(int i = 0; i < numberElements; i++)
    
    cout << "Sorted array: " << endl;
    printArray(employeeNames, employeeSalaries, numberElements);
    return 0;
}