#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge;
    const double SERVICE_CHARGE = 10.0;
    double total;

    //Read units consumed
    cout << "Enter Electricity Units Consumed: ";
    cin >> units;
    
    //using coditional operator
    energyCharge = (units <= 50) ? units * 1.50 : (50 * 1.50) + (units - 50) * 2.00;

    total = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy Charge: " << energyCharge << "birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << "birr" << endl;
    cout << "Total : " << total << "birr" << endl;

    return 0;
}
