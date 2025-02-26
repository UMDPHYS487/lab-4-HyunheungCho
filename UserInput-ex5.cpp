// Add your code here
#include <iostream>
using namespace std;

int factorial(int a) 
{
    int r = 1;  // Initialize result

    for (int i = 1; i <= a; i++) { // Adding +1 to i until it reaches integer a
        r = r * i;  // Compute factorial
    }

    return r;  
}

int main() {
  
      // Variable to store data given by cin
    int a;

    // Take input using cin
    cout << "Please enter an integer value: ";
    cin >> a;

    cout << "The value you entered is " << a << " and its factorial is " << factorial(a) << endl;
    return 0;
}