
// Section 6
// Challenge

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
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;
#define charges_small_room 25
#define charges_large_room 35


int main() {
    
    int num_small_room {0};
    int num_large_room {0};

    cout << "Enter total number of small rooms: ";
    cin >> num_small_room;
    cout << "Enter total number of large rooms: ";
    cin >> num_large_room;
    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of small rooms: " << num_small_room << endl;
    cout << "Number of large rooms: " << num_large_room << endl;
    cout << "Price per small room: $25 " << endl;
    cout << "Price per large room: $35 " << endl;
    int total = (num_small_room * charges_small_room) + (num_large_room * charges_large_room);
    cout << "Cost: $" << total << endl;
    cout << "Tax: $6.6 " << endl;
    double totalWithTax = (total*(6.6))/100;
    cout << "Total Cost: $" << total + totalWithTax << endl;
    cout << "Thank you !!! " << endl;
    return 0;
}

