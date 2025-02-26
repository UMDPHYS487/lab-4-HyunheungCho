#include <iostream>
using namespace std;

// Making the function to calculate factorial
int factorial(int a) 
{
    int r = 1;  // Initialize result

    for (int i = 1; i <= a; i++) { // Adding +1 to i until it reaches integer a
        r = r * i;  // Compute factorial
    }

    return r;  
}

int main() 
{
    int n = 10;

    for (int i = 1; i <= n; i++) {
        cout << "Factorial of " << i << " is " << factorial(i)  << endl; // in factorial(i), adding +1 to i until it reaches integer n and do the factorial computation
    }

    return 0;
}
