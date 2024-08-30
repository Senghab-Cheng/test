#include <iostream>
#include <iomanip>

using namespace std;

void displayMenu(){
    cout << "=======| Display Menu |==========" << endl;
    cout << "1. Add Employee " << endl;
    cout << "2. Update Employee " << endl;
    cout << "3. Delete Employee " << endl;
    cout << "4. Sort Employees by Salary (Ascending) " << endl;
    cout << "5. Search Employee " << endl;
    cout << "0. Exit " << endl;
    cout << "==========================================" << endl;
    cout << "Enter your option: ";
}

// Global Variables for employee
int employeeId[100];
string employeeName[100];
float employeeSalary[100];

// Count number of employees
int employeeCount = 0;

// 1. Add Employee
void addEmployee(){
    system("clear");
    cout << "=====| Add Employee " << endl;
    // Auto increment employee Id
    employeeId[employeeCount] = employeeCount + 1;
    cout << "Enter employee Name: ";
    cin.ignore();
    getline(cin, employeeName[employeeCount]);
    cout << "Enter employee Salary: ";
    cin >> employeeSalary[employeeCount];
    employeeCount++;
    cout << "Employee added successfully." << endl;
}

// 2. Update Employee
void updateEmployee(){
    system("clear");
    cout << "=====| Update Employee |==========" << endl;
    int id;
    cout << "Enter employee ID to update: ";
    cin >> id;
    for(int i = 0; i < employeeCount; i++){
        if(employeeId[i] == id){
            cout << "Enter new employee Name: ";
            cin.ignore();
            getline(cin, employeeName[i]);
            cout << "Enter new employee Salary: ";
            cin >> employeeSalary[i];
            cout << "Employee updated successfully." << endl;
            return;
        }
    }
    cout << "Employee not found." << endl;
}

// 3. Delete Employee
void deleteEmployee(){
    system("clear");
    cout << "=====| Delete Employee |==========" << endl;
    int id;
    cout << "Enter employee ID to delete: ";
    cin >> id;
    for(int i = 0; i < employeeCount; i++){
        if(employeeId[i] == id){
            for(int j = i; j < employeeCount - 1; j++){
                employeeId[j] = employeeId[j + 1];
                employeeName[j] = employeeName[j + 1];
                employeeSalary[j] = employeeSalary[j + 1];
            }
            employeeCount--;
            cout << "Employee deleted successfully." << endl;
            return;
        }
    }
    cout << "Employee not found." << endl;
}

// 4. Sort Employees by Salary (Ascending)
void sortEmployeesBySalary(){
    system("clear");
    cout << "=====| Sort Employees by Salary (Ascending) |==========" << endl;
    for(int i = 0; i < employeeCount - 1; i++){
        for(int j = 0; j < employeeCount - i - 1; j++){
            if(employeeSalary[j] > employeeSalary[j + 1]){
                swap(employeeId[j], employeeId[j + 1]);
                swap(employeeName[j], employeeName[j + 1]);
                swap(employeeSalary[j], employeeSalary[j + 1]);
            }
        }
    }
    cout << "Employees sorted successfully." << endl;
}

// 5. Search Employee
void searchEmployee(){
    system("clear");
    cout << "=====| Search Employee |==========" << endl;
    string name;
    cout << "Enter employee Name to search: ";
    cin.ignore();
    getline(cin, name);
    bool found = false;
    for(int i = 0; i < employeeCount; i++){
        if(employeeName[i] == name){
            cout << setw(5) << " ID" << setw(20) << " Name" << setw(10) << "Salary" << endl;
            cout << setw(5) << employeeId[i] << setw(20) << employeeName[i] << setw(10) << employeeSalary[i] << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Employee not found." << endl;
    }
}

// Display all the employees
void displayAllEmployees(){
    system("clear");
    cout << "=====| Display All Employees |==========" << endl;
    cout << setw(5) << " ID" << setw(20) << " Name" << setw(10) << "Salary" << endl;
    for(int i = 0; i < employeeCount; i++){
        cout << setw(5) << employeeId[i] << setw(20) << employeeName[i] << setw(10) << employeeSalary[i] << endl;
    }
    cout << "Total employees: " << employeeCount << endl;
}

int main(){
    system("clear");
    int option;
    do{
        displayMenu();
        cin >> option;
        switch(option){
            case 1:
                addEmployee();
                break;
            case 2:
                updateEmployee();
                break;
            case 3:
                deleteEmployee();
                break;
            case 4:
                sortEmployeesBySalary();
                break;
            case 5:
                searchEmployee();
                break;
            case 0:
                cout << "Exiting Program" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }while(option != 0);

    return 0;
}