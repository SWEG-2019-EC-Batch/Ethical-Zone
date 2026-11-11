#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double assignment;
    double midExams;
    double finalExams;
    double total;

    //Read marks
    cout << "Enter Assigment: ";
    cin >> assignment;
    cout << "Enter mid Exams: ";
    cin >> midExams;
    cout << "Enter Final Exams; ";
    cin >> finalExams;

    //Calculate 
    total = (assignment * 0.20) + (midExams * 0.30) + (finalExams * 0.50);

    // Print total to one decimal place
    cout << fixed << setprecision(1);
    cout << "Course Total: " << total << endl;
   
    //Dertermine pass or fail using conditional operator
    cout << (total > 50 ? "PASS" : "FAIL");

    return 0;
}
