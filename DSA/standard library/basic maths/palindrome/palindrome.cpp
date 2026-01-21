#include <bits/stdc++.h>
using namespace std;

bool palindrome(int num) {
    int duplicate = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return duplicate == reversed;
}

int main() {   
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (palindrome(num)) {
        cout << "This is a palindrome number";
    } else {
        cout << "This is not a palindrome number";
    }
}
