#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the order of words in a string
    string reverseWords(string s) {
        string result = "";
        int i = s.size()-1;
        while(i>=0){
            while(i>=0 && s[i] == ' '){//checking if any spaces are there if are removing them
                i--;
            }
            int end = i;
            while(i>= 0 && s[i] != ' '){
                i--;
            }
            string word = s.substr(i+1 , end-i);//storing last word in string word
                                                //if in word "HELLO WORLD" there are 11 words 
                                                //the value of end is 11 
                                                //so end-i i.e 11-6 is 5 
            if(!result.empty()){                // was using "while" instead "if" 
                result += ' ';
            }
            result += word;
        }
    //     vector<string> words;
    //     string word = "";
    //     for(int i = 0; i< s.size() ; i++){
    //         if(s[i] != ' '){
    //             word += s[i];
    //         }
    //         else if(!word.empty()){
    //             words.push_back(word);
    //             word = "";
    //         }
    //     }
    //     if(!word.empty()){
    //         words.push_back(word);
    //     }
    //     reverse(words.begin() , words.end());

    //     string result = "";
    //     for(int i =0; i< words.size() ; i++){
    //         result += words[i];
    //         if(i < words.size())
    //             result += ' ';
    //     }
    //     return result;
    }
};

int main() {
    Solution obj;
    string s = " amazing coding skills ";
    cout << obj.reverseWords(s) << endl;
    return 0;
}