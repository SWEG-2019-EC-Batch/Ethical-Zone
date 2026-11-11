#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, fuelConsumption, pricePerLiter,
    totalHours, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes): ";
    cin >> hours >> minutes;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuelConsumption;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalHours = hours + (minutes / 60.0);

    averageSpeed = distance / totalHours;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}
