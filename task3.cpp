//Student Grading System
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> student_names;
    vector<double> student_grades;

    while (true) {
        int choice;
        cout << "\nOptions:" << endl;
        cout << "1 - Add a student and their grade" << endl;
        cout << "2 - Calculate average grade" << endl;
        cout << "3 - Display highest and lowest grades" << endl;
        cout << "4 - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string student_name;
                double grade;

                cout << "Enter student name: ";
                cin >> student_name;

                cout << "Enter student grade(numeric): ";
                cin >> grade;

                student_names.push_back(student_name);
                student_grades.push_back(grade);

                cout << "Student information added." << endl;
                break;
            }
            case 2: {
                if (student_grades.empty()) {
                    cout << "No grades to calculate average." << endl;
                } else {
                    double sum = 0;
                    for (double grade : student_grades) {
                        sum += grade;
                    }
                    double average = sum / student_grades.size();
                    cout << "Average grade: " << average << endl;
                }
                break;
            }
            case 3: {
                if (student_grades.empty()) {
                    cout << "No grades to display." << endl;
                } else {
                    double max_grade = *max_element(student_grades.begin(), student_grades.end());
                    double min_grade = *min_element(student_grades.begin(), student_grades.end());
                    cout << "Highest grade: " << max_grade << endl;
                    cout << "Lowest grade: " << min_grade << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
