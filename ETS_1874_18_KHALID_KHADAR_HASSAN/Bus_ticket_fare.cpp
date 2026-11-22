/*
Program : TRIP FARE BUS CALCULATOR.
-------------------------------
This program allows passengers to choose from five differenttrip routes with different base fares.
It calculates extra baggage charges for bags above 20 kg and gives discounts based on age and student 
status. Finally, it displays the trip information and final fare.

*/
#include <iostream>
using namespace std;

int main(){
    // Step 1: Declaring Variables.
    float base_fare, bag_Weight, rate, discount_amount, total_fare,final_fare;
    int route, age;
    char Isstud;
    const int WEIGHT_LIMIT = 20;

    // Step 2: Display available routes and ask the passenger to choose.
    cout << "AVAILABLE TRIP ROUTES: "<< endl;
    cout << "1. Addis Ababa to Adama = 500 ETB"<< endl;
    cout << "2. Addis Ababa to Hawassa = 1500 ETB"<< endl;
    cout << "3. Addis Ababa to Bahir Dar = 2835 ETB" << endl;
    cout << "4. Addis Ababa to Dire Dawa =  2600 ETB"<< endl;
    cout << "5. Addis Ababa to Mekelle = 4700 ETB"<< endl;

    cout << "Choose your route (1-5): " << endl;
    cin >> route;

    // Step 3: Select the base fare using switch.

    switch (route) {
     case 1:
    base_fare = 500;
    break;
    case 2:
    base_fare = 1500;
    break;
    case 3:
    base_fare = 2835;
    break;
    case 4:
    base_fare = 2600;
    break;
    case 5:
    base_fare = 4700;
    break;
    default:
    cout << "Invalid route selection!";
    return 0;
    }

     // Step 4: Get baggage information and calculate extra charge
    cout << "Enter bag weight (kg): ";
    cin >> bag_Weight;

    cout << "Enter extra weight rate (ETB/kg): ";
    cin >> rate;

    float extra_charge = 0, discount=0;
    if (bag_Weight > WEIGHT_LIMIT) {
        extra_charge = (bag_Weight - WEIGHT_LIMIT) * rate;
    } 

     // Step 5: Get passenger information.
    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a student? (y/n): ";
    cin >> Isstud;

    // Step 5: Calculate discount based on age and student status.

    if(Isstud =='y' || Isstud =='Y') {
        if (age <= 12) {
            discount = 0.65;
        } else if (age >= 60) {
            discount = 0.40;
        } else {
            discount = 0.15;
        }
    }
    else {
        if (age <= 12) {
            discount = 0.50;
        } else if (age >= 60) {
            discount = 0.25;
        } else {
            discount = 0;
        }
    }

    // Step 6: Calculate total fare, discount amount and final fare.

    total_fare = base_fare + extra_charge;
    discount_amount = total_fare * discount;
    final_fare = total_fare - discount_amount;

    // Step 7: Display the trip information
    cout << "YOUR TRIP INFORMATION:"<< endl;
    cout << "Base Fare: " << base_fare << " ETB" << endl;
    cout << "Extra Bag Charge: " << extra_charge << " ETB" << endl;
    cout << "Total Fare: " << total_fare << " ETB" << endl;
    cout << "Discount: " << discount * 100 << "%" << endl;
    cout << "Discount Amount: " << discount_amount << " ETB" << endl;
    cout << "Final Fare: " << final_fare << " ETB" << endl;

    return 0;
    
}