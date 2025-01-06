#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Function to reverse the words in a given string.
     * 
     * @param s - The input string containing words separated by spaces.
     * @return - A string where the words are in reverse order.
     */
    string reverseWords(string s) {

        string str = "";        // Temporary string to hold each word
        stack<string> sk;       // Stack to store words
        string ans = "";        // String to store the final reversed sentence

        // Iterate through the input string character by character
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {  // If a space is encountered
                if (str != "") { // Check if the current word is not empty
                    sk.push(str); // Push the word onto the stack
                    str = "";     // Reset the word string for the next word
                }
            } else {
                str += s[i];     // Append character to the current word
            }
        }

        // After the loop, push the last word into the stack if it's not empty
        if (!str.empty()) {
            sk.push(str);
        }

        // Pop words from the stack to form the reversed sentence
        while (!sk.empty()) {
            if (sk.size() == 1) {  // If it's the last word, avoid adding a trailing space
                ans += sk.top();
            } else {
                ans += sk.top() + " "; // Add a space after each word
            }
            sk.pop();  // Remove the word from the stack
        }

        return ans;  // Return the final reversed sentence
    }
};

int main() {
    Solution solution;
    string input = "Hello World from C++";
    
    // Call the reverseWords function and store the result
    string output = solution.reverseWords(input);
    
    // Print the reversed sentence
    cout << "Reversed words: " << output << endl;
    
    return 0;
}
