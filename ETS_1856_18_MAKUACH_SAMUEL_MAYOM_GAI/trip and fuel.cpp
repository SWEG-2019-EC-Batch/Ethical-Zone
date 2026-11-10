#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance;
    double fuelConsumed;
    double time;
    double pricePerLitre;
    double averageSpeed;
    double fuelUsed;
    double fuelCost;
    int hours,minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter fuel consumed (L per 100km): ";
    cin >> fuelConsumed;
    cout << "Enter fuel price per litre: ";
    cin >> pricePerLitre;
    cout << "Enter time in hours, minutes: ";
    cin >> hours >> minutes;

    time = hours + (minutes)/60.0;

    averageSpeed = distance / time;
    fuelUsed = (distance * fuelConsumed) / 100;
    fuelCost = fuelUsed * pricePerLitre;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << "km/h" << endl;
    cout << "Fuel used: " << fuelUsed << "litres " << endl;
    cout << "fuel cost: " << fuelCost << "birr" << endl;

    return 0;
}
