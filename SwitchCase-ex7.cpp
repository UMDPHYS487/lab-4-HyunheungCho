#include <iostream>
using namespace std;

int main() {
    int num, i;

    // Get user input
    cout << "Enter a number: ";
    cin >> num;

    // Assign values to 'i' for three cases
    if (num % 2 == 0 && num < 10) {
        i = 1;  // This is going to be case 1. i is even and less than 10.
    } else if (num % 2 != 0) {
        i = 2;  // This is going to be case 2. i is odd because of no remainder.
    } else {
        i = 3;  // Everything else (hahaha case)
    }

    switch (i) {
        case 1: // Even and less than 10 case
            cout << "The square of " << num << " is " << num * num << endl;
            break;

        case 2: // Odd number case
            cout << num << " divided by 2 is " << num / 2.0 << endl;
            break;

        case 3: // All other cases
            cout << "hahaha" << endl;
            break;
    }

    return 0;
}