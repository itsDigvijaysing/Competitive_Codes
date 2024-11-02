#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    set<string> st; // Set to store unique substrings

    // Recursive function to find the maximum number of unique substrings
    int rec(int ind, string str, string &s) {
        // Base case: if the index reaches the end of the string
        if (ind == s.size()) {
            // If the current substring is unique, return 1, otherwise return 0
            if (st.find(str) == st.end()) return 1;
            else return 0;
        }

        int currCnt = 0; // Variable to store the current count of unique substrings

        // If the current substring is unique
        if (st.find(str) == st.end()) {
            st.insert(str); // Insert the current substring into the set
            // Recursively call the function with the next character as a new substring
            currCnt = 1 + rec(ind + 1, string(1, s[ind]), s);
            st.erase(str); // Remove the current substring from the set (backtracking)
        }

        // Recursively call the function by adding the next character to the current substring
        currCnt = max(currCnt, rec(ind + 1, str + s[ind], s));

        return currCnt; // Return the maximum count of unique substrings
    }

public:
    // Function to find the maximum number of unique substrings
    int maxUniqueSplit(string s) {
        st.clear(); // Clear the set of unique substrings
        // Start the recursion with the first character as the initial substring
        return rec(1, string(1, s[0]), s);
    }
};

int main() {
    string s;
    cin >> s; // Read input string
    Solution sol;
    cout << sol.maxUniqueSplit(s); // Output the result of maxUniqueSplit function
    return 0;
}