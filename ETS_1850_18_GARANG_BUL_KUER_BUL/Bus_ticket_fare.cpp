#include <iostream>
#include <iomanip>
using namespace std;

// Declare destinations using enum
enum Route
{
    ADDIS_BAHIR_DAR = 1,
    ADDIS_MEKELLE,
    ADDIS_HAWASSA,
    HAWASSA_JIMMA,
    ADDIS_JIMMA
};

int main()
{
    // Variable declaration
    int choice;
    short int age;
    char isStud;

    float base_fare, bag_weight, rate;
    float extra_charge = 0;
    float discount = 0;
    float total_fare;

    const float WEIGHT_LIMIT = 20;

    // Display available destinations
    cout << "===== BUS TICKET BOOKING SYSTEM =====" << endl;

    cout << "\nAvailable Routes:" << endl;
    cout << "1. Addis Ababa to Bahir Dar" << endl;
    cout << "2. Addis Ababa to Mekelle" << endl;
    cout << "3. Addis Ababa to Hawassa" << endl;
    cout << "4. Hawassa to Jimma" << endl;
    cout << "5. Addis Ababa to Jimma" << endl;

    // Get destination choice
    cout << "\nEnter your destination (1-5): ";
    cin >> choice;

    // Assign base fare using switch
    switch (choice)
    {
        case ADDIS_BAHIR_DAR:
            base_fare = 1500;
            break;

        case ADDIS_MEKELLE:
            base_fare = 1800;
            break;

        case ADDIS_HAWASSA:
            base_fare = 1000;
            break;

        case HAWASSA_JIMMA:
            base_fare = 1200;
            break;

        case ADDIS_JIMMA:
            base_fare = 1600;
            break;

        default:
            cout << "Invalid destination!" << endl;
            return 0;
    }

    // Get baggage information
    cout << "\nEnter bag weight in KG: ";
    cin >> bag_weight;

    cout << "Enter extra charge rate per KG (ETB): ";
    cin >> rate;

    // Calculate extra baggage charge
    if (bag_weight > WEIGHT_LIMIT)
    {
        extra_charge = (bag_weight - WEIGHT_LIMIT) * rate;
    }
    else
    {
        extra_charge = 0;
    }

    // Get passenger information
    cout << "\nEnter passenger age: ";
    cin >> age;

    cout << "Are you a student? (Y/N): ";
    cin >> isStud;

    // Calculate passenger discount
    if (age <= 12)
    {
        discount = 0.50f * base_fare;
    }
    else if (age >= 60)
    {
        discount = 0.25f * base_fare;
    }
    else if (isStud == 'Y' || isStud == 'y')
    {
        discount = 0.15f * base_fare;
    }
    else
    {
        discount = 0;
    }

    // Calculate total fare
    total_fare = base_fare + extra_charge - discount;

    // Display trip information
    cout << fixed << setprecision(2);

    cout << "\n========== TRIP INFORMATION ==========" << endl;

    cout << "Base fare: "
         << base_fare << " ETB" << endl;

    cout << "Bag weight: "
         << bag_weight << " KG" << endl;

    cout << "Extra baggage charge: "
         << extra_charge << " ETB" << endl;

    cout << "Passenger discount: "
         << discount << " ETB" << endl;

    cout << "Total fare: "
         << total_fare << " ETB" << endl;

    cout << "======================================" << endl;

    return 0;
}
    
