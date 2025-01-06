#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Function to find the largest odd number that can be formed from the given string
    string largestOddNumber(string num) {
        int n = num.length(); // Get the length of the input string
        
        // Iterate from the last character to the first character of the string
        for (int i = n - 1; i >= 0; i--) {
            // Check if the current character is an odd digit
            if ((num[i] - '0') % 2 != 0) {
                // If it's odd, return the substring from the start to this character
                return num.substr(0, i + 1);
            }
        }
        
        // If no odd digit is found, return an empty string
        return "";
    }
};

// Example usage
int main() {
    Solution solution;
    string num = "4206";
    
    string result = solution.largestOddNumber(num);
    
    // Output the result
    cout << "The largest odd number in " << num << " is: " << result << endl;

    return 0;
}
