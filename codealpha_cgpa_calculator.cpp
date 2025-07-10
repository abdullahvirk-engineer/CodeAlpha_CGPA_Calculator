#include <iostream>
#include <iomanip> // for setting precision
using namespace std;

int main() {
    int numCourses;
    float grade, credit;
    float totalGradePoints = 0.0;
    float totalCredits = 0.0;

    // Ask user how many courses they took
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    // Use loop to take grades and credits
    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << ":\n";

        // Get grade
        cout << "Enter grade (on 4.0 scale): ";
        cin >> grade;

        // Validate grade
        while (grade < 0.0 || grade > 4.0) {
            cout << "Invalid grade. Enter again (0.0 to 4.0): ";
            cin >> grade;
        }

        // Get credit hours
        cout << "Enter credit hours: ";
        cin >> credit;

        // Validate credit
        while (credit <= 0) {
            cout << "Invalid credit hours. Enter again (> 0): ";
            cin >> credit;
        }

        // Add to totals
        totalGradePoints += grade * credit;
        totalCredits += credit;
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display result
    cout << fixed << setprecision(2); // round to 2 decimal places
    cout << "\nTotal Credit Hours: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
