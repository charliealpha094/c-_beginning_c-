// Done by Carlos Amaral (2024/02/13)

#include <iostream>

using namespace std;

// This program will calculate the area of the room in square feet

int main()
{
    // Length
    int room_length;
    cout << "Please, enter the room length (in feet): ";
    cin >> room_length;

    // Width
    int room_width;
    cout << "Please, enter the room width (in feet): ";
    cin >> room_width;

    // Calculation
    int area;
    area = room_length * room_width;

    // Output
    cout << "The calculated area equals = " << area << " feet "<<endl;

    return 0;

}
