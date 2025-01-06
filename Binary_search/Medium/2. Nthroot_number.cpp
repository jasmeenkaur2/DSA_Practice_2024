#include <bits/stdc++.h>  // Include all standard libraries in one go (commonly used in competitive programming)
using namespace std;

// Function to find the Nth root of a number m
// This function uses binary search to efficiently find the integer nth root of m.
int NthRoot(int n, int m) {
    int s = 1;      // Starting point of the search range
    int e = m;      // End point of the search range
    long long mid = s + (e - s) / 2;  // Calculate the midpoint of the search range

    // Perform binary search within the range [s, e]
    while (s <= e) {
        // If mid^n is equal to m, mid is the nth root of m
        if (pow(mid, n) == m) {
            return mid;  // Return the nth root
        }
        
        // If mid^n is less than m, move to the higher half of the search range
        else if (pow(mid, n) < m) {
            s = mid + 1;  // Update the starting point of the search range
        }
        
        // If mid^n is greater than m, move to the lower half of the search range
        else {
            e = mid - 1;  // Update the end point of the search range
        }
        
        // Recalculate the midpoint after updating the search range
        mid = s + (e - s) / 2;
    }

    // If no exact integer nth root is found, return -1
    return -1;
}

int main() {
    int n, m;

    // Prompt the user to enter the values of n and m
    cout << "Enter the value of n (Nth root) and m (number): ";
    cin >> n >> m;

    // Call the NthRoot function and display the result
    int result = NthRoot(n, m);
    
    if (result != -1) {
        cout << "The " << n << "th root of " << m << " is: " << result << endl;
    } else {
        cout << "No integer " << n << "th root exists for " << m << endl;
    }

    return 0;  // Indicate successful program termination
}
