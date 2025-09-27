#include <iostream>
using std::cout, std::cin, std::endl;
int main() {
    cout << "Welcome to Reha's cleaning service";
    cout << "\n-----------------------------------" << endl;

    cout << "How many small rooms would you like cleaned: ";
    int numberOfSmallRooms {0};
    cin >> numberOfSmallRooms;

    cout << "\nHow many larger rooms would you like cleaned: ";
    int numberOfLargerRooms {0};
    cin >> numberOfLargerRooms;

    const double priceOfSmallRoom = 25;
    const double priceOfLargeRoom = 35;
    const double taxRate = 0.06;
    const double calculatedTax = ((numberOfSmallRooms * priceOfSmallRoom) + (numberOfLargerRooms * priceOfLargeRoom)) * taxRate;
    const int estimatedExpiryDate = 30;

    cout << "\n-----------------------------------" << endl;
    cout << "Number of small rooms entered: " << numberOfSmallRooms << endl;
    cout << "Number of large rooms entered: " << numberOfLargerRooms << endl;

    cout << "Cost for both types of rooms (without tax): $" << (numberOfSmallRooms * priceOfSmallRoom) + (numberOfLargerRooms * priceOfLargeRoom) << endl;
    cout << "The total tax is: $" << ((numberOfSmallRooms * priceOfSmallRoom) + (numberOfLargerRooms * priceOfLargeRoom)) * taxRate << endl;
    cout << "Cost for both types of rooms (with tax): $" << (numberOfSmallRooms * priceOfSmallRoom) + (numberOfLargerRooms * priceOfLargeRoom) + calculatedTax << endl;


    return 0;
}