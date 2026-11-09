#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double assignment, midterm, finalMark, total;
    string result;

// for Inputs
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final mark: ";
    cin >> finalMark;

// Process
    total = (assignment * 0.20) + (midterm * 0.30) + (finalMark * 0.50);

 // Conditional operator
    result = (total >= 50) ? "Pass" : "Fail";

// Output
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}

