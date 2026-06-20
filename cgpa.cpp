#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int numCourses;
    double totalCredits = 0.0;
    double totalGradePoints = 0.0;
    cout << "=== CGPA Calculator ===" << endl;
    cout << "Enter the number of courses taken: ";
    cin >> numCourses;
    vector<double> grades(numCourses);
    vector<double> credits(numCourses);

    // Input loop for each course
    for (int i = 0; i < numCourses; ++i) {
        cout << "\nCourse " << i + 1 << ":" << endl;
        cout << "Enter Grade (e.g., 4.0 for A, 3.0 for B): ";
        cin >> grades[i];
        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += (grades[i] * credits[i]);
    }

    // Output individual course grades
    cout << "\n=== Course Summary ===" << endl;
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course " << i + 1 << " - Grade: " << grades[i] 
             << " | Credits: " << credits[i] << endl;
    }

    // Calculate and display CGPA
    if (totalCredits > 0) {
        double cgpa = totalGradePoints / totalCredits;
        cout << fixed << setprecision(2);
        cout << "\nOverall CGPA: " << cgpa << endl;
    } else {
        cout << "\nNo credits entered. Cannot calculate CGPA." << endl;
    }

    return 0;
}