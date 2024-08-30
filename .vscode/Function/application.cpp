#include <iostream>
using namespace std;

// Print title
void printTitle();
void printDynamicTitle(string title);

// Sum of 3 subjects score
float sumScore(float math, float khmer, float english);

// Calculate Average Score
float calculateAvg(float totalScore);

// Print Grade
void printGrade(float avgScore);

// Print information of student
void studentInfo(float math, float khmer, float english);

int main() {
    system("clear");

    string studentName;
    float mathScore;
    float khmerScore;
    float englishScore;

    printDynamicTitle("student score management");
    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Math Score: ";
    cin >> mathScore;
    cout << "Enter Khmer Score: ";
    cin >> khmerScore;
    cout << "Enter English Score: ";
    cin >> englishScore;

    studentInfo(mathScore, khmerScore, englishScore);

    return 0;
}

void printTitle() {
    cout << "======== |Grade System| ========" << endl;
}

void printDynamicTitle(string title) {
    cout << "========] " << title << " |========" << endl;
}

float sumScore(float math, float khmer, float english) {
    return math + khmer + english;
}

float calculateAvg(float totalScore) {
    return totalScore / 3;
}

void printGrade(float avgScore) {
    if (avgScore >= 90 && avgScore <= 100) {
        cout << "Grade A" << endl;
    } else if (avgScore >= 80 && avgScore <= 89) {
        cout << "Grade B" << endl;
    } else if (avgScore >= 70 && avgScore <= 79) {
        cout << "Grade C" << endl;
    } else if (avgScore < 70) {
        cout << "Fail" << endl;
    }
}

void studentInfo(float math, float khmer, float english) {
    cout << "==========| Student Information |========" << endl;
    cout << " Math: " << math << endl;
    cout << " Khmer: " << khmer << endl;
    cout << " English: " << english << endl;
    cout << " ----------------------------------" << endl;
    float totalScore = sumScore(math, khmer, english);
    cout << " Total score: " << totalScore << endl;

    float avgScore = calculateAvg(totalScore);
    cout << " Average score: " << avgScore << endl;

    // Call function to print grade
    printGrade(avgScore);
}
