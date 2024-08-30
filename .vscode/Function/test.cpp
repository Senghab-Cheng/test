#include <iostream>

using namespace std;

// print title
void printTittle();
void printDynamicTittle(string title);

// sum of 3 subjects score
float sumScore(float math, float khmer, float english);

// Print information of student
void studentInfo(float math, float khmer, float english){
    cout << "==========| Student Information |========" << endl;
    cout << " Math: " << math << endl;
    cout << " Khmer: " << khmer << endl;
    cout << " English: " << english << endl;
    cout << " ----------------------------------" << endl;
    float totalScore = sumScore(math, khmer, english);
    cout << " Total score: " << totalScore << endl;
}

int main(){
    system("clear");

    string studentName;
    float  mathScore;
    float khmerScore;
    float englishScore;

    printDynamicTittle(" student score management");
    cout << " Enter Student Name: ";
    getline (cin, studentName);

    cout << " Enter Math Score: ";
    cin >> mathScore;
    cout << " Enter Khmer Score: ";
    cin >> khmerScore;
    cout << " Enter English Score: ";
    cin >> englishScore;

    studentInfo( mathScore, khmerScore, englishScore);





    return 0;
}
void printTitle(){
cout << "======== |Grad System| ========" << endl;
}
void printDynamicTittle(string title) {
cout << "========] "<< title <<" |========" << endl;
}
float sumScore(float math, float khmer, float english){
return math + khmer + english;
}