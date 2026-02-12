#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char , int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}  //key and value <key , value>
        };
        for(int i = 0 ; i< s.size()-1; i++){   //running loop till n-1 because in last value the loop will go out of bound 
            if(roman[s[i]] < roman[s[i+1]]){
                res -= roman[s[i]];
            }
            else{
                res += roman[s[i]];
            }
        }
        return res + roman[s.back()]; // adding last value
    }
};

int main() {
    Solution sol;
    string s = "MCMXCIV"; 
    int result = sol.romanToInt(s);
    
    // Print the result
    cout << "Integer value: " << result << endl;

    return 0;
}