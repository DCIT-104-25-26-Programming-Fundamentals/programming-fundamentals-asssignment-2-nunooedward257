// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 1
// =============================================================================
//
// TASK: Prime Number Checker
//
// Write a C++ program that checks whether a given number is prime.
//
// A prime number is a whole number greater than 1 that has no divisors
// other than 1 and itself (e.g., 2, 3, 5, 7, 11, 13 ...).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLES
// -----------------------------------------------------------------------------
//
//   Enter a number: 7
//   7 is a prime number.
//
//   Enter a number: 10
//   10 is NOT a prime number.
//
//   Enter a number: 1
//   1 is NOT a prime number.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement the logic inside a function (see scaffold below).
// - Numbers less than 2 are NOT prime — handle this inside the function.
// - The main() function must call isPrime() and print the result.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

# include <iostream>
using namespace std;
// function to check if a number is prime 
bool isPrime(int n) {
    if (n < 2) { //numbers less than 2 are not prime
        return false;
    }
    for (int i = 2; i * i <= n; i++) { // check for factors from 2 to the square root of n 
        if (n % i == 0) {
            return false; // found a factor, n is not prime
        }
    }
    return true; // no factors found, n is prime
}

int main() {
    int number;
    cout << "==============================================================================" << endl;
    cout << "!!PRIME NUMBER CHECKER!!" << endl; // print program title
    cout << "==============================================================================" << endl; // print separator
    cout << "Enter a number: "; // prompt user for input
    cin >> number; 

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl; // print result if number is prime
    } else {
        cout << number << " is NOT a prime number." << endl; // print result if number is not prime
    }

    return 0; 
}
