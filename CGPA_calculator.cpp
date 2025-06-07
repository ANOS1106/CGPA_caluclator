#include <iostream>
#include <iomanip> // using this to set precision for numbers after decimal atlast while calculating CGPA 
using namespace std;

int main() {
    int semesters;
    float sgpa, credits;
    float totalCredits = 0.0, totalWeightedSGPA = 0.0;

    cout << "🎓 CGPA Calculator"<<endl;
    cout << "------------------------"<<endl;
    cout << "Enter the number of semesters: "<<endl;
    cin >> semesters;

    if (semesters <= 0) {
        cout << "❌ Invalid input. Number of semesters must be greater than 0."<<endl;
        return 1;
    }

    for (int i = 1; i <= semesters; ++i) {
        cout << "Semester " << i << ":"<<endl;

        cout << "Enter SGPA (0.0 - 10.0): "<<endl;
        cin >> sgpa;
        if (sgpa < 0.0f || sgpa > 10.0f) {
            cout << "❌ Invalid SGPA. Please enter a value between 0 and 10."<<endl;
            return 1;
        }

        cout << "Enter total credits for Semester " << i << ": ";
        cin >> credits;
        if (credits <= 0.0f) {
            cout << "❌ Invalid credits. Must be greater than 0."<<endl;
            return 1;
        }

        totalCredits += credits;
        totalWeightedSGPA += sgpa * credits;
    }

    float cgpa = totalWeightedSGPA / totalCredits;
    cout << "Your CGPA is: " << setprecision(3)<<cgpa << endl;

    return 0;
}
