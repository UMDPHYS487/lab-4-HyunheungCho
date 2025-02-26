// add your code here
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    long long factorial = 1; // Initialize factorial

    for (int i = 1; i <= n; i++) {
        factorial *= i; // Compute factorial iteratively
        cout << "Factorial of " << i << " is " << factorial << endl;
    }

    return 0;
}