// Done by Carlos Amaral (2024/02/25)

// Constants

#include <iostream>

/*
        Frank's Carpet Cleaning Service
        Charges $30 per room
        Sales tax rate is 6%
        Estimates are valid for 30 days

        Prompt the user for the number they would like cleaned
        and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost: $60
    Tax: $3.6
    =============================================
    Total estimate: $63.6
    This estimate is valid for 30 days

    Pseudocode:
        Prompt the user to enter the number of rooms
        Display the number of rooms
        Display price per room

        Display cost: (number of rooms * price per room)
        Display tax: number of rooms * price per room * tax rate
        Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate
        Display estimate expiration time
    */

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    cout << "\nEstimate for carpet service cleaning" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: " << number_of_rooms * price_per_room << endl;
    cout << "Tax: " << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "===================================" << endl;
    cout << "Total estimate: " << (number_of_rooms * price_per_room) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "Total estimate is valid for: " << estimate_expiry << " days" <<endl;

    cout << endl;
    return 0;
}
