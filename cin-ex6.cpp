// your code here
#include <iostream>
using namespace std;

int y=20;
int *x=&y;

int main() {
    cout << "The memory address of y is: " << &y << endl;
    cout << "The value of x is: " << x << ", which is just the pointer to y address"<< endl;
    cout << "The value stored at x is: " << *x << ", which is the value stored in x, integer y value" <<endl;

    // Now lets change it to see if it is really the case
    y = 50;
    
    cout << "\nAfter changing y to 50:\n";
    cout << "The value of x (pointer to y) is still: " << x << endl;
    cout << "The value stored at x (dereferencing x) is now: " << *x << endl;

    return 0;
}

// x is just a pointer storing the address of y, so as long as y remains at the same memory location, x remains unchanged.
// When y’s value changes, the data at that memory location changes, so *x (dereferencing x) reflects the new value.
