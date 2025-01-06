#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // m1 maps characters from string s to string t
        // m2 maps characters from string t to string s
        unordered_map<char, char> m1, m2;

        // Iterate through each character of strings s and t
        for (int i = 0; i < s.size(); i++) {
            char ch1 = s[i]; // Current character from string s
            char ch2 = t[i]; // Current character from string t

            // Check if ch1 is already mapped in m1 (s -> t mapping)
            if (m1.find(ch1) != m1.end()) {
                // If ch1 is mapped, but the mapping does not match ch2, return false
                if (ch2 != m1[ch1]) {
                    return false; // Conflict in mapping
                }
            } else {
                // If ch1 is not mapped yet, check if ch2 is already mapped in m2 (t -> s mapping)
                if (m2.find(ch2) != m2.end()) {
                    return false; // ch2 is already mapped to another character, so return false
                }
            }

            // Create/update the mapping from ch1 to ch2 in m1
            m1[ch1] = ch2;

            // Create/update the mapping from ch2 to ch1 in m2
            m2[ch2] = ch1;
        }

        // If no conflicts were found, the strings are isomorphic, so return true
        return true;
    }
};


int main() {
    Solution solution;
    
    string s1, t1;
    
    // Input strings
    cout << "Enter first string (s): ";
    cin >> s1;
    cout << "Enter second string (t): ";
    cin >> t1;

    // Check if the strings are isomorphic
    bool result = solution.isIsomorphic(s1, t1);

    // Output the result
    if (result) {
        cout << "The strings \"" << s1 << "\" and \"" << t1 << "\" are isomorphic." << endl;
    } else {
        cout << "The strings \"" << s1 << "\" and \"" << t1 << "\" are not isomorphic." << endl;
    }

    return 0;
}