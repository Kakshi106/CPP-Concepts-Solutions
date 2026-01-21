#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the order of words in a string
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for(int i = 0; i< s.size() ; i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        if(!word.empty()){
            words.push_back(word);
        }
        reverse(words.begin() , words.end());

        string result = "";
        for(int i =0; i< words.size() ; i++){
            result += words[i];
            if(i < words.size())
                result += ' ';
        }
        return result;
    }
};

int main() {
    Solution obj;
    string s = " amazing coding skills ";
    cout << obj.reverseWords(s) << endl;
    return 0;
}