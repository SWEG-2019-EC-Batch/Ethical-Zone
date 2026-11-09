#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge, totalBill;
    const double serviceCharge = 10.00;

    cout << "Enter electricity units: ";
    cin >> units;

    energyCharge = (units <= 50) ? units * 1.50 : (50 * 1.50) + ((units - 50) * 2.00);

    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << serviceCharge << " birr" << endl;
    cout << "Total bill: " << totalBill << " birr" << endl;

    return 0;
}
