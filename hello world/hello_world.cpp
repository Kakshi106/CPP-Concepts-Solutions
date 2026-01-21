#include <iostream>
using namespace std;
int reverse(int num){
    while(num != 0){
    int digit = num%10;
    int rev = rev*10  + digit;
    num /=10;
    }
}
int main(){
    int num;
   cin >> num;
   int reversed = reverse(num);
    cout << reversed;
}