#include <bits/stdc++.h>
int reverse(int num){
    int reversed = 0;
    while(num != 0){
        int digit = num%10;
        reversed = reversed*10 + digit;
        num /= 10;
    }
    return reversed;
}