#include <iostream>
using namespace std;

struct Student {
    int age;
    string name;
    string gender;
    string email;

    void studentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Gender: " << gender << endl;
        cout << "Student Email: " << email << endl;
    }
};

int main() {
    system("clear");

    Student student1;
    student1.name = "John Doe";
    cout << "Student Name: " << name << endl;
    cin>> student1.name;
    student1.age = 12;
    cout<< "Student Age: " << age << endl;
    cin>> student1.age;
    student1.gender = "Male";
    cout << "Student Gender: " << gender << endl;
    cin>> student1.gender;
    student1.email = "johndoe@example.com";
    cout<< student1.email;
    cin>> student1.email;
    student1.studentInfo();

    Student student2;
    student2.name = "Jane Smith";
    cout << "student2.name: " << student2.name << endl;
    cin>> student2.name;
    student2.age = 13;
    cout<<"student2.age: " << student2.age << endl;
    cin>> student2.age;
    student2.gender = "Male";
    cout <<"student2.gender: " << student2.gender << endl;   
    cin>> student2.gender;
    student2.email = "janesmith@example.com";
    cout<< "student2.email: " << student2.email << endl
    cin>> student2.email;
    student2.studentInfo();

    return 0;
}