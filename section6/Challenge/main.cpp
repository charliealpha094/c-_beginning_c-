// Done by Carlos Amaral (2024/03/06)

// Section 6 - Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 1
Number of large rooms: 3
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
================================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main()
{
    int num_small_rooms {0};
    int num_large_rooms {0};
    const double price_small_room {25};
    const double price_large_room {35};
    double cost {0};
    double tax {0};
    double estimate {0};
    const int days {30};

    cout << "Welcome to Charles' Carpet Cleaning Service" << endl;

    cout << "\nHow many small rooms would you like cleaned? " << endl;
    cin >> num_small_rooms;
    cout << "How many large rooms would you like cleaned? " << endl;
    cin >> num_large_rooms;

    cout << "Number of small rooms: " << num_small_rooms << endl;
    cout << "Number of large rooms: " << num_large_rooms << endl;

    // Calculate cost and tax
    cost = (num_small_rooms * price_small_room) + (num_large_rooms * price_large_room);
    tax = cost * 0.06;

    cout << "Cost: " << cost << "$" << endl;
    cout << "Tax: " << tax << "$" << endl;

    cout << "===========================" << endl;

    estimate = cost + tax;
    cout << "Total estimate: " << estimate << "$" << endl;
    cout << "This estimate is valid for " << days << " days" << endl;


    return 0;
}
