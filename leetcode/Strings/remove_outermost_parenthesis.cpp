#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to remove outer parentheses
    string removeOuterParentheses(string s) {
        string result ="";
        int level = 0;
        for (char ch : s){
            if(ch == '('){
                if(level > 0){
                    result += ch;
                }
                level++;
            }
            else if(ch == ')'){
                level--;
                if(level > 0 )
                    result += ch;
            }
            
        }
        return result;

    }

};

int main() {
    string s = "(()())(())";  
    // Create object of Solution class
    Solution sol;             

    // Get result
    string ans = sol.removeOuterParentheses(s);

    // Print result
    cout << "The result is: " << ans << endl;

    return 0;
}