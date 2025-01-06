#include <iostream>  // Include the necessary header for input/output operations

// Function to calculate the floor of the square root of a given number n
int floorSqrt(int n) {
    int start = 0;  // Initialize the start of the search range to 0
    int end = n;    // Initialize the end of the search range to n (the maximum possible square root)

    // Perform binary search within the range [start, end]
    while (start <= end) {
        // Calculate the midpoint of the current range
        int mid = start + (end - start) / 2;
        
        // Calculate the square of the midpoint
        int val = mid * mid;

        // If the square is less than or equal to n, move to the right half
        if (val <= n) {
            start = mid + 1;  // Update start to search in the higher range
        }
        // If the square is greater than n, move to the left half
        else {
            end = mid - 1;    // Update end to search in the lower range
        }
    }

    // When the loop ends, end will hold the largest integer whose square is less than or equal to n
    return end;
}

int main() {
    int number;
    
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Call the floorSqrt function and display the result
    std::cout << "The floor square root of " << number << " is " << floorSqrt(number) << std::endl;

    return 0;  // Indicate successful program termination
}
