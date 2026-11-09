/*The problem analysis:
Inputs:Assignment,Midterm and Final Marks.
Outputs:Total(in one decimal place),The word 'Pass' or 'Fail'
Process:
Declare double variables to hold Assignment,Midterm,final marks and the Total Marks.
Assign the Passing marks(50%)as a constant.
Print prompt and read three marks from the user.
Calculate the weighted sum of the three marks and assign it to the Total Marks.
Compare the total marks of the student and decide whether a student has passed or failed
Print the Total and either 'pass or fail'
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int const passingMarks = 50;
  double assignment, midterm, finalExam;
   cout << " Enter the assingment";
   cin >>assignment;
   cout << "Enter the midterm";
   cin>> midterm;
   cout <<"Enter the final";
   cin >> finalExam;

    double total = 0.20 * assignment + 0.30 * midterm + 0.50 * finalExam;
    const char* result = (total >= 50) ? "Pass" : "Fail";

    cout << fixed << setprecision(1) << total << " " << result << '\n';

    return 0;
}
