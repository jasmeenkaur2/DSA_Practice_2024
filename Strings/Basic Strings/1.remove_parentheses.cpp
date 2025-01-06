#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Function to remove outermost parentheses from the given string
    string removeOuterParentheses(string s) {
        int count = 0;  // Initialize a counter to keep track of the balance of parentheses
        string ans;     // String to store the result after removing outer parentheses

        // Iterate through each character in the string
        for(int i = 0; i < s.size(); i++) {
            // If the current character is an opening parenthesis '('
            if(s[i] == '(') {
                // If count is greater than 0, it's not an outer parenthesis, so add it to the result
                if(count > 0) {
                    ans = ans + s[i];
                }
                count++;  // Increment the counter for an opening parenthesis
            }
            // If the current character is a closing parenthesis ')'
            else if(s[i] == ')') {
                // If count is greater than 1, it's not an outer parenthesis, so add it to the result
                if(count > 1) {
                    ans = ans + s[i];
                }
                count--;  // Decrement the counter for a closing parenthesis
            }
        }
        return ans;  // Return the result string with outer parentheses removed
    }
};


int main() {
    // Creating an instance of the Solution class
    Solution solution;
    
    // Test case 1
    string input1 = "(()())(())";
    string output1 = solution.removeOuterParentheses(input1);
    cout << "Input: " << input1 << "\nOutput: " << output1 << endl;

    return 0;
}
