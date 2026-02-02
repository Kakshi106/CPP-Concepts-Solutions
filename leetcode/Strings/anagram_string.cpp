#include <bits/stdc++.h>
using namespace std;

// Function to check if two strings are anagrams
bool CheckAnagrams(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    int freq[26] = {0};

    for (int i = 0; i < str1.length(); i++) {
        freq[str1[i] - 'A']++;   // FIX
        freq[str2[i] - 'A']--;   // FIX
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}


int main() {
    // Example strings to check if they are anagrams
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";

    // Check if the strings are anagrams and output the result
    if (CheckAnagrams(Str1, Str2)) {
        cout << "True" << endl;  // Output "True" if they are anagrams
    } else {
        cout << "False" << endl;  // Output "False" if they aren't anagrams
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if two strings are anagrams
// bool CheckAnagrams(string str1, string str2) {
//     if(str1.length() != str2.length())
//         return false;
//     sort(str1.begin() , str1.end());
//     sort(str2.begin() , str2.end());

//     for(int i = 0; i < str1.length() ; i++){
//         if(str1[i] != str2[i])
//             return false;
//     }
//     return true;
//     }

// int main() {
//     // Example strings to check if they are anagrams
//     string Str1 = "INTEGER";
//     string Str2 = "TEGERNI";

//     // Check if the strings are anagrams and output the result
//     if (CheckAnagrams(Str1, Str2)) {
//         cout << "True" << endl;  // Output "True" if they are anagrams
//     } else {
//         cout << "False" << endl;  // Output "False" if they aren't anagrams
//     }

//     return 0;
// }